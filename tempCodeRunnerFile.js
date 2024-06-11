const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const getName = async (query) => {
  return new Promise((resolve) => {
    rl.question(query, (answer) => {
      rl.close();
      resolve(answer);
    });
  });
};

const main = async () => {
  const name = await getName("Enter your name: ");
  console.log(`Hello ${name}!`);
};

 main();
