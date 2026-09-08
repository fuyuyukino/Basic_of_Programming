const prompt = require('./node_modules/prompt-sync')({ sigint: true });

// Input cm and print m
const cm = Number(prompt("Enter length in centimeter: "));

const m = Math.floor(cm / 100);
const leftover_cm = cm % 100;
console.log(`Cm to m: ${m}m and ${leftover_cm}cm`);