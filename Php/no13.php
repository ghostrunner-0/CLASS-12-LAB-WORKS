<!-- 13.Write a PHP program to input a string through a text box and find its length.[use strlen()] -->
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="post">
        text: <input type="text" name="name"><br><br>
        <input type="submit" value="Submit" name="submit">
    </form>
    <?php
    if(isset($_POST['submit'])){
        $str=$_POST['name'];
        echo strlen($str);
    }
    ?>
</body>
</html>