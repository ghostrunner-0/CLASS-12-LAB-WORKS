// 5.Write a program to input your name and age using form and know whether he/she is eligible to vote or not.
//  [ Use function and onclick event]
function vote(){
    let name1=document.f1.name.value
    let age1=document.f1.age.value
    if(age1>=18){
        document.getElementById("output").innerHTML=("Congratulations! "+name1+" You are eligible to vote.")
    }
    else{
        document.getElementById("output").innerHTML=("Sorry! "+name1+" Your are not eligible to vote")
    }
}