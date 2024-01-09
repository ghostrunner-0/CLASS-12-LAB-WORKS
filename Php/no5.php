<!-- 5.Write a PHP program to input any number via form and check whether the number is positive or negative and be sure number should not be zero. -->
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="post">
        <label for="num1">Enter a Number: </label>
        <input type="number" name="num1" id="num1"><br><br>
        <input type="submit" value="submit" name="submit">
    </form>
    <?php
    if(isset($_POST['submit'])){
        $n1 = $_POST['num1'];
        if($n1>0){
            echo "The number is positive.";
        }else if($n1<0){
            echo "The number is negative.";
        }else{
            echo "The number is zero.";
        }
    }
    ?>
</body>
</html>