function table(){
    let number1=document.f1.num1.value
    document.write("The multiplication table of "+number1+" is: <br>")
for (let i = 0; i <10; i++) {
    document.write(number1+" * "+(i+1)+" = "+(i+1)*number1+"<br>")
}
}