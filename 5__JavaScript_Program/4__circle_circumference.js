const prompt = require('./node_modules/prompt-sync')({ sigint: true });

// Input diameter and print the circumference
const PI = 3.14159
const diameter = Number(prompt("Enter diameter of a circle: "));

const circumference = PI * diameter
console.log(`The circumference of a circle is: ${circumference}`);