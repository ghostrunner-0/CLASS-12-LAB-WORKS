// 3.Write a program to pick the greatest number among three numbers entered by the user.
function great(){
let num1=document.f1.number1.value
let num2=document.f1.number2.value
let num3=document.f1.number3.value
if(num1>num2 && num1>num2){
    document.write("The greatest number is "+num1)
}
else if (num2>num3 && num2>num1) {
    document.write("The greatest number is "+num2)   
} else {
    document.write("The greatest number is "+num3)      
}
}