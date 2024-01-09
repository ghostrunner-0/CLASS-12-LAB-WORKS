<!-- 3.Write a PHP program to input name and address using form and display them. -->
<?php
$name='';
$address='';

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="post">
        Name: <input type="text" name="name"><br><br>
        Address: <input type="text" name="address">
        <br><br>
        <input type="submit" value="Submit" name="submit">
    </form>
    <?php
    if(isset($_POST['submit'])){
        $name=$_POST['name'];
        $address=$_POST['address'];
        echo "<br>". "Name: " . $name ."<br>". "Address: " . $address;
    }
    ?>
</body>
</html>