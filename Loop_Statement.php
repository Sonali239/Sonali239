<html>
<head>
	<title>LOOP CONDITION</title>
</head>
<body>
	<?php
		echo "<h1 style='color:red'>FOR LOOP</h1>";
		$n=2;
		for($i=1;$i<=10;$i++)
		{
			echo "<h2>$n*$i=</h2>".$n*$i;
		}
		echo "<hr>";
		echo "<h1 style='color:blue'>NESTED-FOR LOOP</h1>";
		
		for($n1=2;$n1<=5;$n1++)
		{
			for($i=1;$i<=10;$i++)
			{
				echo "<h2>$n1*$i=</h2>".$n1*$i;
			}
		}
		echo "<hr>";	
	?>
</body>
</html>
