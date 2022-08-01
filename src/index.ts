import Parser from 'tree-sitter';
import Haxe from 'tree-sitter-haxe-enum';

const parser = new Parser();
parser.setLanguage(Haxe);

let code = '';
process.stdin.on('data', (data) => {
  code += data;
});
process.stdin.on('end', main);

function main() {
  if (code.trim() === '') {
    console.log('No input');
    return;
  }
  parser.setLogger(parser.getLogger());
  const tree = parser.parse(code);
  if (tree.rootNode.hasError()) {
    console.error('Syntax Error');
    return;
  }

  const eventName = tree.rootNode.child(0).child(1).text;
  const entries = tree.rootNode
    .child(0)
    .children.filter((x) => x.type === 'enum_entry')
    .map((x) => ({
      name: x.child(0).text,
      params:
        x.child(1).type === 'parameters'
          ? x
              .child(1)
              .children.filter((x) => x.type === 'parameter')
              .map((x) => ({ name: x.child(0).text, type: x.child(2).text }))
          : [],
    }));

  const out = `abstract ${eventName}<T:Function>(String) {
	public inline function new(name) {
		this = name;
	}
}

${entries
  .map(
    (entry) => `abstract ${entry.name}Event(Table<Int, Dynamic>) {
	${entry.params[0]?.type.startsWith('Array') ? restEvent() : regularEvent(entry)}
}`
  )
  .join('\n\n')}

class ${eventName}s {
${entries
  .map(
    (x) =>
      `\tpublic static inline var EVENT_${x.name
        .replace(/[A-Z]/g, (letter, i) => (i === 0 ? letter : `_${letter}`))
        .toUpperCase()} = new ${eventName}<${
        x.name
      }Event->Void>("${x.name.replace(/[A-Z]/g, (letter, i) =>
        i === 0 ? letter.toLowerCase() : `_${letter.toLowerCase()}`
      )}");`
  )
  .join('\n\t')}
}
`;

  console.log(out);
}

function regularEvent(entry: { params: { name: string; type: string }[] }) {
  return `${entry.params
    .map((x) => `public var ${x.name}(get, never):${x.type};`)
    .join('\n\t')}
	
	${entry.params
    .map(
      (x, i) => `public inline function get_${x.name}():${x.type} {
		return this[${i + 1}];
	}`
    )
    .join('\n\n\t')}`;
}

function restEvent() {
  return `public function get_arguments():Array<String> {
		var arr = Table.toArray(this);
		arr.shift();
		return arr;
	}`;
}
