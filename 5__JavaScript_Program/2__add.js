const prompt = require('./node_modules/prompt-sync')({ sigint: true });

// Input two integers and print
const a = Number(prompt("Enter first integer: "));
const b = Number(prompt("Enter second integer: "));

console.log(`Sum: ${a + b}`);