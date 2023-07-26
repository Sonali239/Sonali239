<html>
<head>
	<title>Scope Variable</title>
</head>
<body>
	<?php
	
	echo "<h1 style='color:red'>SCOPE OF LOCAL VARIABLE </h1>";
		function local_var()
		{
			$var=12;
			echo "<h2>Local_Variable value is:</h2>".$var;
		}
		local_var();
		echo "<hr>";
		echo "<h1 style='color:red'>SCOPE OF GLOBAL VARIABLE </h1>";
	$var=14;
	$name="Sonali";
	function global_var()
	{
		global$var;
		global$name;
		 echo "<h2> Calling global Variable inside the function is:</h2> $name<br>";
		$var1=16;
		echo "<h2>local variable value is:</h2>$var1<br>";
	}
	global_var();
	echo "<h2>Calling global Variable outside the function is:</h2>".$var;
	echo "<hr>";
	echo "<h1 style='color:red'>SCOPE OF STATIC VARIABLE </h1>";
	function static_var()
	{
			static$var=12;
			$var1=20;
			$var++;
			$var1++;
			echo "<h2>Calling Static_Variable value is:</h2>$var<br>";
			echo "<h2>Calling Non-Static_Variable value is:</h2>".$var2;
	}
		static_var();
	?>

</body>
</html>