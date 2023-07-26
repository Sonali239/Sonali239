<?php
	echo "<h1 style='color:red'><u>RECORD SUBMITTED</u></h1>";
	$Name=$_POST['username'];
	$email=$_POST['email'];
	$Mob_no=$_POST['number'];
	$city=$_POST['city'];
	$pin=$_POST['code'];
	$state=$_POST['state'];
	$country=$_POST['country'];
	echo "name: $Name<br>";
	echo"<hr>";
	echo "email: $email<br>";
	echo"<hr>";
	echo "MOB: $Mob_no<br>";
	echo"<hr>";
	echo "city: $city<br>";
	echo"<hr>";
	echo "pin: $pin<br>";
	echo"<hr>";
	echo "state: $state<br>";
	echo"<hr>";
	echo "country: $country<br>";
	echo"<hr>";
	echo "<h1 style='color:red'>THANKU...</h>"; 

?>
