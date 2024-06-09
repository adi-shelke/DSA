let str = "aaannvvvbbbb";
let count = 0;
let prevCharacter = str[0];
let outputStr = "";
let char=""
for (let i = 1; i < str.length; i++) {
  char = str[i];
  if (char === prevCharacter) {
    count++;
    continue;
  }
  outputStr += prevCharacter + (count+1);
  prevCharacter = char;
  count = 0;
}
outputStr += prevCharacter + (count+1);
console.log(outputStr)
