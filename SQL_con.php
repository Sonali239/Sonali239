<?php
	$SQL_con=mysqli_connect("localhost","root","","first_sql_program");
	$email=$_REQUEST["email"];
	$pass=$_REQUEST["pass"];
	$query= "select * from persons";
	$rs=mysqli_query($SQL_con,$query);
	/*$row=mysqli_fetch_array($rs);
	echo $row[1];
	echo "<br>";
	echo $row['email'];
	echo $row['pass'];
	echo "<br>";
	while($row=mysqli_fetch_array($rs))
	{
		echo $row['email'];
		echo "<br>";
	}

	*/
	//$query= "INSERT INTO persons(Username,Password) VALUES('$email','$pass')";
	/*$res=mysqli_query($SQL_con,$query);
	if ($res)
	{
		echo "query recorded";
	}
	else
	{
		echo "error";
	}
*/
	/*$SQL_con=mysqli_connect("localhost","root","","first_sql_program");
	if($SQL_con)
	{
		echo "Database connected";
	}
	else
	{
		echo "Database not connected";
	}*/
?>
<html>
<head>
	<title>SQL_PROGRAM</title>
</head>
<body>

	<center>
		<table>
		<h1>SQL USER LOGIN</h1>
	<form method="post">
		<tr>
			<td>Username</td>
			<td><input type="email" name="email" required></td>
		</tr>
		<tr>
			<td>Password</td>
			<td><input type="pass" name="pass"required></td>
		</tr>
			<?php
		while($row=mysqli_fetch_array($rs))
		{?>
			<tr>
				<td><?php echo $row['email'];?></td>
				<td><?php echo $row['pass'];?></td>
		<?php		
		}?>
		<tr>
			<td><input type="submit" value="submit"></td>
		</tr>
	</form>
</table>
</center>
</body>
