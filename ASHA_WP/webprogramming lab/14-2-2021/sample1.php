<html>
<?php

$conn = mysqli_connect("localhost", "root", "","laravel");

?>


<h1> Welcome to new page</h1>
<?php
$roll=$_POST['roll'];
$name=$_POST['name'];
$gender=$_POST['gender'];
$age=$_POST['age'];
$sql="insert into table1 (roll_no,name,age,gender) values($roll,'$name',$age,'$gender')";
mysqli_query($conn,$sql);
?>
</html>