// 3.Write a program to pick the greatest number among three numbers entered by the user.
let num1=prompt("Enter first number")
let num2=prompt("Enter second number")
let num3=prompt("Enter third number")
if(num1>num2 && num1>num2){
    document.write("The greatest number is "+num1)
}
else if (num2>num3 && num2>num1) {
    document.write("The greatest number is "+num2)   
} else {
    document.write("The greatest number is "+num3)      
}