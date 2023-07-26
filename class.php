<?php
	$con=mysqli_connect("localhost","root","","sign_up_form");
	$query="select * from sign where batchid=12965";
	$rs=mysqli_query($con, $query);
	$row=mysqli_fetch_array($rs);
	echo $row['username'];
	echo $row['batchid'];
?>