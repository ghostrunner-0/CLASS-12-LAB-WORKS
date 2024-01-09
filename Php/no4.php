<!-- .Write a PHP program to find the greatest number among three numbers. Here, numbers are entered via html form. -->
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="post">
        <label for="num1">Enter first Number:  </label>
        <input type="number" name="num1" id="num1"><br><br>
        <label for="num2">Enter second Number:  </label>
        <input type="number" name="num2" id="num2"><br><br>
        <label for="num3">Enter third Number:  </label>
        <input type="number" name="num3" id="num3"><br><br>
        <input type="submit" value="submit" name="submit">
    </form>
    <?php
    if(isset($_POST['submit'])){
        $n1 = $_POST['num1'];
        $n2 = $_POST['num2'];
        $n3 = $_POST['num3'];
        if($n1>$n2 && $n1>$n3)
        echo $n1."is the greatest number";
        else if($n2>$n3 && $n2>$n1)
        echo $n2."is the greatest number";
        else
        echo $n3."is the greatest number";
    }
    ?>
</body>
</html>