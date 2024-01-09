<!-- 9.WAP to print factors of a number. -->
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
        $n = $_POST['num1'];
        echo "The Factors of $n are : ";
        for($i=1;$i<=$n;$i++){
            if($n%$i==0){
                echo $i."," ;
            }
        }
    }
    
    ?>
</body>
</html>