<?php
 $con=mysqli_connect("localhost","root","","sign_up_form");
 $Name=$_REQUEST["nm"];
 $Email=$_REQUEST['em'];
 $Phone=$_REQUEST['n'];
 $Code=$_REQUEST['co'];
 $Country=$_REQUEST['i'];
 $Gender=$_REQUEST['gender'];

 
 $query ="INSERT INTO reg(Name,Email,Phone,Code,Country,Gender) VALUES('$Name','$Email','$Phone','$Code','$Country','$Gender')";
                                                         
                                                         
 $res=mysqli_query($con,$query);
	if ($res)
	{
		echo "<h1 style='color:red'>your query record submitted</h>";
	}
	else
	{
		echo "error";
	}
	?>