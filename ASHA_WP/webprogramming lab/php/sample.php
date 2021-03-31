<html>
<head>
<style>
table{
 font-family: verdana; 
 color:white; 
 font-size: 16px; 
 font-style: normal;
 font-weight: bold;
 background: linear-gradient(to bottom, #33ccff 0%, #ff99cc 100%);  
 border-collapse: collapse; 
 border: 4px solid #000000;
 border-style: dashed;
  }

</style>
</head>
<body>
<form action="sample1.php" method="post" >
<table align="center"   width="600px" cellpadding = "10">
<tr>
<td>roll</td>
<td><input type="text" name="roll" />
</td>
<tr>
<td> Name</td>
<td><input type="text" name="name" />
</td>
</tr>
<tr>
<td>Age</td>
<td><input type="text" name="age" /></td>
</tr>
<tr>
<td>gender</td>
<td><input type="text" name="gender" /></td>
</tr>
<tr>
<td colspan="2" align="center">
<input type="submit" value="Submit"  >
<input type="reset" value="Reset">
</form>
</form>
<br>
</br>
<?php

$conn = mysqli_connect("localhost", "root", "","laravel");
$sql="select roll_no,name,age,gender from table1";
$result=mysqli_query($conn,$sql);
if(mysqli_num_rows($result)>0)
echo mysqli_num_rows($result)." Rows Found..!!";
?>
<table cellpadding = "10"  width="400px" ><tr>
<td>roll</td><td>name</td><td>age</td><td>gender</td>
</tr>
<?php
while($row=mysqli_fetch_assoc($result)){
?>
<table align="center"  width="400px" cellpadding = "10" >
<tr>
<td><?php echo $row["roll_no"];?></td>
<td><?php echo $row["name"];?></td>
<td><?php  echo $row["age"];?></td>
<td><?php echo $row["gender"];?></td>
</tr>
</table>
<?php 
}
?>
</table>
</body>
</html>
