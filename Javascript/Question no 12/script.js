// 12.Input your name and grade using form. Validate this with a message ‘This field is required’, using onclick() event.
function validate(){
    let name=document.getElementById('name'),
    grade=document.getElementById('grade'),
    msg=document.getElementById('msg')
    if(name.value==''){
        msg.innerHTML="This field is required"
        name.focus();
    }
    if(grade.value==''){
        msg.innerHTML="This field is required"
        grade.focus();
    }

}