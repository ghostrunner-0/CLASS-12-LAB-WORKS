<!-- 7.Write a PHP program to print a multiplication table of a number. Input the number via form. -->
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
        for($i=1;$i<=10;$i++){
            echo $n1 ."x". $i. "= ". ($n1 * $i) . "<br>";
        }
    }
    ?>
</body>
</html>