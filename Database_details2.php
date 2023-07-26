<?php 
	error_reporting(0);
	require_once('sp.php');
	$query="select * from reg";
	$result =mysqli_query($con,$query);
//$con=mysqli_connect("localhost","root","","website");
?>

<html>
<head>
	<title></title>
	<style>
		.form 
		{  
  			width: 330px;  
   			height: 650px;  
   			margin: auto;  
    		border: 3px solid skyblue;  
    		border-radius: 5px;  
    		padding: 20px; 
    		background-color: lightyellow; 
		}  
	</style>
</head>
<body>
	<center>
		<table class="form" height="200px" width="20px"border="1">
			<tr>
			<?php
					while($row=mysqli_fetch_assoc($result))
					{
				?>	
			<tr>
				<td>Name</td>
				<td><?php echo $row['Name'];?></td>
				<td>Email</td>
				<td><?php echo $row['Email'];?></td>
				<td>Contact</td>
				<td><?php echo $row['Phone'];?></td>
				<td>Code</td>
				 <td><?php echo $row['Code'];?></td>
				 <td>Country</td>
				 <td><?php echo $row['Country'];?></td>
				 <td>Gender</td>
				 <td><?php echo $row['Gender'];?></td>
			</tr>
				<?php
					}
				?>
			</tr>
		</table>
	</center>
</body>
</html>

