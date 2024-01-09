<!-- 2.Write a PHP program to swap two numbers. -->
<?php
$num1=5;
$num2=6;
$temp=null;
echo "Before Swapping: num1=".$num1." and num2=".$num2."<br>";
$temp=$num1;
$num1=$num2;
$num2=$temp;
echo "After Swapping: num1=".$num1." and num2=".$num2;
?>
