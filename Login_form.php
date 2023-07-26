<?php
	$Login_form=mysqli_connect("localhost","root","","sign_up_form");
	$name=$_REQUEST["username"];
	$Batchid=$_REQUEST['BATCH-ID'];
	$Email=$_REQUEST['Email'];
	$pass=$_REQUEST["password"];
	$query= "INSERT INTO sign(Username,batchid,Email,Password) VALUES('$name','$Batchid','$Email','$pass')";
	$res=mysqli_query($Login_form,$query);
	if ($res)
	{
		echo "<h1 style='color:red'>your query record submitted</h>";
	}
	else
	{
		echo "error";
	}
	
	
?>