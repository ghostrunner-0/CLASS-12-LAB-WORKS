<!-- 8.Write a PHP program to display the factorial value of a number. -->
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
        $n=null;
    function fact($n) {
        if($n==0)
        return 1;
    return $n * fact($n-1);
    }
    if(isset($_POST['submit'])){
        $n = $_POST['num1'];
    }
    if($n!=null){
        echo "The Factorial of ". $n ." is : ". fact($n);
    }
    ?>
</body>
</html>