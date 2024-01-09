<!-- 17.Write a PHP program to delete records of a student whose id is 3.[previous question] -->
<?php
$conn=mysqli_connect('localhost','root','','student');
if(!$conn){
    echo "connection not successful";
}
if(isset($_POST['submit'])){

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
    <form action="" method="post">
        <input type="submit" value="submit" name="submit">
    </form>
    <?php
    if(isset($_POST['submit'])){
        $sql="DELETE FROM std WHERE id=3";
        if(mysqli_query($conn,$sql)) {
            echo "<h2>Record deleted successfully.</h2>";
            } else{
                echo "Error deleting record: ". mysqli_error($conn);
                }
    }
    ?>
</body>
</html>