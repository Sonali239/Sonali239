<html>
<head>
	<title>PHP DATATYPES</title>
</head>
<body>
	<?php
		echo "<h1 style='color:green'>PRIMITIVE DATATYPES</h1>";
		echo "<h2 style='color:blue'>Integer Datatypes</h2>";
		$dec1 = 34;  
    	$oct1 = 0243;  
    	$hexa1 = 0x45;  
    	echo "<h3>Value is:</h3>";
    	echo $dec1;
    	echo "<br>$oct1<br>$hexa1";
    	echo "<hr>";
   		echo "<h2 style='color:red'>Float Datatypes</h2>";
		$var1 = 3.423;  
    	$var2 = 2.43; 
    	$sum=$var1+$var2;
    	echo "<h3>Sum of two numbers is:</h3>".$sum;
    	echo "<hr>";
    	echo "<h2 style='color:hotpink'> String Datatypes</h2>";
    	$name="Sonali";
    	echo "<h3> String value is:</h3> $name<br>";
    	echo "<hr>";
    	echo "<h1 style='color:green'>USER-DEFINE DATATYPES</h1>";
		echo "<h2 style='color:blue'>Array Datatypes</h2>";
		$car= array("Scarpio","Creata","Ford");
		echo "<h3>Array Element 1:<h3>$car[0]<br>";
		echo "<h3>Array Element 2:<h3>$car[1]<br>";
		echo "<h3>Array Element 3:<h3>$car[2]<br>";
		echo "<hr>";
		echo "<h2 style='color:blue'>Object Datatypes</h2>";
		class bike
		{
			function model()
			{
				$model_name="Royal-Enfield";
				echo "<h3> Object value is:</h3>".$model_name;
			}
		}
		$obj =new bike();
		$obj -> model();  
		echo "<hr>";
		echo "<h2 style='color:red'>Boolean Datatypes</h2>";
		$var1 = 423;  
    	$var2 = 343;
    	$ture='t';
    	$false='f';
    	if($var1>$var2)
    	{
    		echo $true;
    	}
    	else
    	{
    		echo $false;
    	}

    ?>
</body>
</html>