<?php 
	require_once('disp.php');
	$query="select * from webs";
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
		<table class="form" height="200px" width="20px"border="1px">
			<tr>
			<?php
					while($row=mysqli_fetch_assoc($result))
					{
				?>	
			<tr>
				<td>Name</td>
				<td><?php echo $row['Name'];?></tr>
			</tr>
			<tr>
				<td>Contact</td>
				<td><?php echo $row['phone'];?></td>
				<td>Email</td>
				<td><?php echo $row['Email'];?></td>
				<td>Pasword</td>
				 <td><?php echo $row['Password'];?></td>
			</tr>
				<?php
					}
				?>
			</tr>
		</table>
	</center>
</body>
</html>
