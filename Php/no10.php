<!-- 10.Write a PHP program to store some strings in an array and print them. -->
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="post">
        <label>Enter Names: </label>
        <input type="text" name="txt1" id="txt1"><br><br>
        <input type="text" name="txt2" id="txt2"><br><br>
        <input type="text" name="txt3" id="txt3"><br><br>
        <input type="text" name="txt4" id="txt4"><br><br>
        <input type="text" name="txt5" id="txt5"><br><br>
        <input type="text" name="txt6" id="txt6"><br><br>
        <input type="text" name="txt7" id="txt7"><br><br>
        <input type="text" name="txt8" id="txt8"><br><br>
        <input type="text" name="txt9" id="txt9"><br><br>
        <input type="submit" value="submit" name="submit">
    </form>
    <?php
    $text=[];
    if(isset($_POST['submit'])){
        for($i=0;$i<9;$i++){
        $text[$i] = $_POST['txt'.($i+1)];
    }
     foreach($text as $txt){
        echo "Name :".$txt."<br>";
     }
    }
    
    ?>
</body>
</html>