// 13.Write any two paragraphs in your html page. Now write a program using JQuery to hide that written paragraphs as you click on that.
$(document).ready(function(){
    $("p").click(function(){
        $(this).hide();
    })
})