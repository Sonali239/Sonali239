
<?php
	if(isset($_POST['sum']))
	{
		$fn=$_POST['fn'];
		$sn=$_POST['sn'];
		$res=$fn+$sn;
	}
	else if(isset($_POST['sub']))
	{
		$fn=$_POST['fn'];
		$sn=$_POST['sn'];
		$res=$fn-$sn;
	}
	else if(isset($_POST['mult']))
	{
		$fn=$_POST['fn'];
		$sn=$_POST['sn'];
		$res=$fn*$sn;
	}
	else if(isset($_POST['div']))
	{
		$fn=$_POST['fn'];
		$sn=$_POST['sn'];
		$res=$fn/$sn;
	}
?>

<html>
<head>
	<title>Calculator</title>
	<style>
		.formstyle  
		{  
  			width: 300px;  
   			height: 250px;  
   			margin: auto;  
    		border: 3px solid black;  
    		border-radius: 10px;  
    		padding: 20px;  
		}  
	</style>
</head>
<body>
	<form method="post" class="formstyle">
		<center><h1><U>CALCULATOR</U></h1>
		<table>
			<tr>
				<td>First Number:</td>
				<td><input type="number" name="fn"></td>
			</tr>
			<tr>
				<td>Second Number:</td>
				<td><input type="number" name="sn"></td>
			</tr>
			<tr>
				<td>Result:</td>
				<td><input type="number" value="<?php echo $res;?>"></td>
			</tr>
			<tr>
				<td><input type="submit" name="sum"value="add">
				<input type="submit" name="sub"value="sub">
				<input type="submit" name="mult"value="mult">
				<input type="submit" name="div"value="div"></td>
			</tr>
		</table>
	</center>
	</form>
</body>
</html>
