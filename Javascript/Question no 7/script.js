// 7.WAP to print factorial value of a number.
let number=prompt("Enter a number"),fact=1;
for(let i=1;i<=number;i++){
    fact=fact*i;
}
document.write(`The factorial of ${number} is ${fact}`);