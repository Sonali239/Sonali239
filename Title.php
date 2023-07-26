<?php
	$Title=mysqli_connect("localhost","root","","first_sql_program");
	if (!empty($_REQUEST['TITLE']) && !empty($_REQUEST['Desp']) && !empty($_REQUEST['ID']));		//validation
	{
		$ID=$_REQUEST['ID'];
		$TITLE=$_REQUEST['TITLE'];
		$Desp=$_REQUEST['Desp'];
		$query= "INSERT INTO record(ID,title,description) VALUES('$ID','$TITLE','&Desp')";
	$res=mysqli_query($Title,$query);
	if ($res)
	{
		echo "<h1 style='color:red'>your query record submitted</h>";
	}
	else
	{
		echo "error";
	}
}
	?>
<html>
<head>
	<title>TITLE</title>
</head>
<body>
	<center>
		<table>
			<form method="post">
				<h1>TITLE BOX</h1>
				<tr>
					<td>ID</td>
					<td><input type="number" name="ID">
					</td>
				</tr>
					<tr>
						<td>TITLE</td>
						<td><input type="text" name="TITLE"></td>
					</tr>
					<tr>
						<td>Description</td>
						<td><input type="text" name="Desp"></td>
					</tr>
					<tr>
						<td><input type="submit" value="submit"></td>
					</tr>
				</form>
			</table>
		</center>
	</body>
</html>
