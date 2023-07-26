<html>
<head>
	<title>ADD PAGE</title>
</head>
	
	<body>
		<center>
			<table>
				<form method=request>
					<tr>
						<td>ID</td>
						<td><input type="number" name="ID"></td>
					</tr>
					<tr>
						<td>TITLE</td>
						<td><input type="text" name="TITLE"></td>
					</tr>
					<tr>
						<td>Description</td>
						<td><input type="text" name="Description"></td>
					</tr>
					<tr>
						<td><input type="submit" value="submit"></td>
					</tr>
				</form>
			</table>
		</center>
	</body>
</html>
<?php
	$table=mysqli_connect("localhost","root","","form");
	$ID=$_REQUEST["ID"];
	$TITLE=$_REQUEST["TITLE"];
	$Description=$_REQUEST["Description"];
	$query= "INSERT INTO form(ID,TITLE,DESCRIPTION) VALUES('$ID','$TITLE','$Description)";
	$res=mysqli_query($table,$query);
	if ($res)
	{
		echo "query recorded";
	}
	else
	{
		echo "error";
	}

