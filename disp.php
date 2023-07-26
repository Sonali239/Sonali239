
<?php 
	$con=mysqli_connect("localhost","root","","website");
	$name=$_REQUEST['nm'];
	$phone=$_REQUEST['n'];
	$email=$_REQUEST['e'];
	$Password=$_REQUEST['n'];
	$query="INSERT INTO webs(Name,phone,Email,Password) values('$name','$phone','$email','$Password')";
	$res=mysqli_query($con,$query);
						
	if($res)
	{
		echo "<h1><b>Record Submitted</b></h>";
	}
	else
	{
		echo "<h1><b>Not Record Submitted</b></h>";
	}
						

?>


