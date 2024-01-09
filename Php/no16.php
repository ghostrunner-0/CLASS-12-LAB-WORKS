<!-- 16.Write a PHP program to display all records (previous question) of students who are in grade 11. -->
<?php
$conn=mysqli_connect('localhost','root','','student');
if(!$conn){
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
    <?php
        $res="SELECT * from std where grade = 11";
        $result=mysqli_query($conn,$res);
    ?>
    <table  border='1px solid black'> 
        <thead>
            <th>Id</th>
            <th>Name</th>
            <th>Grade</th>
        </thead>
        <tbody>
        <?php
        while($row=mysqli_fetch_assoc($result)){?>
        <tr>
            <td><?=$row['id']?></td>
            <td><?=$row['name']?></td>
            <td><?=$row['grade']?></td>
        </tr>
        <?php }?>
        </tbody>       
    </table>
</body>
</html>