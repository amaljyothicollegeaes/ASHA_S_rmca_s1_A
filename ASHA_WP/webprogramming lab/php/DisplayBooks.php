//DisplayBooks.php
<!DOCTYPE HTML>
<html>
<body bgcolor="87ceeb">
<center><h2>Simple Library Management System</h2></center>
<br>
<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "datalib";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 

$search = $_REQUEST["search"];

$query = "select Accessionnumber, title, authors, edition,publisher from lib1org where title like '$search'"; //search with a book name in the table book_info
$result = mysqli_query($conn,$query);

if(mysqli_num_rows($result)>0)if(mysqli_num_rows($result)>0)

{
?>

<table border="2" align="center" cellpadding="5" cellspacing="5">

<tr>
<th>Accession number</th>
<th> Title </th>
<th> Author </th>
<th> Edition </th>
<th> Publication </th>
</tr>

<?php while($row = mysqli_fetch_assoc($result))
{
?>
<tr>
<td><?php echo $row["Accessionnumber"];?> </td>
<td><?php echo $row["title"];?> </td>
<td><?php echo $row["authors"];?> </td>
<td><?php echo $row["edition"];?> </td>
<td><?php echo $row["publisher"];?> </td>
</tr>
<?php
}
}
else
echo "<center>No books found in the library by the name $search </center>" ;
?>
</table>
</body>
</html>
<br>