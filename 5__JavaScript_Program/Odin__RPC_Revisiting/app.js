const prompt = require('prompt-sync')({ sigint: true })

function getComputerChoice() {
    const max = 3;
    const min = 1;
    const num = Math.floor(Math.random() * (max - min + 1)) + min;
    return num;
}

function getHumanChoice() {
    let numHumanChoice = Number(prompt("Choose between 1 (Rock), 2 (Paper), or 3 (Scissor): "));
    return numHumanChoice;
}

function playRound(humanChoice, computerChoice) {
    if (humanChoice === 1 && computerChoice === 2) {
        console.log("You lose! Paper beats Rock"); computerScore++;
    } else if (humanChoice === 2 && computerChoice === 3) {
        console.log("You lose! Scissor beats Paper"); computerScore++;
    } else if (humanChoice === 3 && computerChoice === 1) {
        console.log("You lose! Rock beats Scissor"); computerScore++;
    } else if (humanChoice === 1 && computerChoice === 3) {
        console.log("You win! Rock beats Scissor"); humanScore++;
    } else if (humanChoice === 2 && computerChoice === 1) {
        console.log("You win! Paper beats Rock"); humanScore++;
    } else if (humanChoice === 3 && computerChoice === 2) {
        console.log("You win! Scissor beats Paper"); humanScore++;
    } else {
        console.log("Draw");
    }
}

let humanScore = 0;
let computerScore = 0;

function playGame() {

    console.log(`The result is: ${humanScore} - ${computerScore}`);

    if (humanScore > computerScore) {
        console.log("You win the game!")
    } else if (humanScore < computerScore) {
        console.log("You lose the game!")
    } else {
        console.log("The game is draw!")
    }
}

playGame();