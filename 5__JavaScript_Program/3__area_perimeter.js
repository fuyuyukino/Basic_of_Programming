const prompt = require('./node_modules/prompt-sync')({ sigint: true });

// Input width, length and print area, perimeter
const width = Number(prompt("Enter width of a rectangle: "));
const length = Number(prompt("Enter length of a rectangle: "));

const area = width * length;
const perimeter = 2*(width + length);

console.log(`"The area of a rectangle is: ${area}`);
console.log(`"The perimeter of a rectangle is: ${perimeter}`);