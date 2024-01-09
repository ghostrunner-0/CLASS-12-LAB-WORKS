<!-- 1.WAP to find sum of two numbers. Here, numbers are entered via html form. -->
<?php
$num1=null;
$num2=null;
if(isset($_POST['submit'])){
    $num1=$_POST['num1'];
    $num2=$_POST['num2'];
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
        <form method="post">
            Number 1: <input type="number" name="num1" id="num1">
            Number 2: <input type="number" name="num2" id="num2">
            <input type="submit" value="Submit" name="submit">
    </form>
    <?php
    if($num1!=null && $num2!=null)
    echo "Sum is: ".($num1+$num2);
    ?>
</body>
</html>