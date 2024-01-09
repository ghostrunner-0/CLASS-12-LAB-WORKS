<!-- 14.Write a PHP program to connect a database named ‘student’. -->
<?php
$conn=mysqli_connect('localhost','root','','student');
if($conn){
    echo "Connection to student successful";
}else{
    echo "connection not successful";
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
</body>
</html>