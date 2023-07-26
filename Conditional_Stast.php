<html>
<head>
	<title>Conditonal Statement</title>
</head>
<body>
	<?php
		echo "<h1 style='color:red'>IF STATEMENT</h1>";
		$num=12;
		if($num<=100)
			echo "<h2>num is greater</h2>";
		echo "<hr>";
		echo "<h1 style='color:blue'>IF-ELSE STATEMENT</h1>";
		$num=15;
		if($num%2==0)
			echo "<h2> even number</h2>";
		else
			echo "<h2>odd number</h2>";
		echo "<hr>";
		echo "<h1 style='color:green'>IF-ELSE-IF STATEMENT</h1>";
		$marks=100;
		if($marks>=300 && $marks<=500)
			echo "<h2>First</h2>";
		else if($marks>=225 && $marks<=300)
			echo "<h2>Second</h2>"; 
		else if($marks>=125 && $marks<=225)
			echo "<h2>Third</h2>";
		else if($marks>0 && $marks<125)
			echo "<h2>Fail</h2>";
		else
			echo "<h2>Invalid input</h2>";
		echo "<hr>";
		echo "<h1 style='color:green'>NESTED-IF STATEMENT</h1>";
		$a=10;
		$b=14;
		$c=6;
		if($a>$b)
		{
			if($a>$b && $a>$c)
				echo "<h2>bigger is $a</h2>";
			else
				echo "<h2>bigger is $c</h2>";
		}
		if($b>$a)
		{
			if($b>$a && $b>$c)
				echo "<h2>bigger is $b</h2>";
			else
				echo "<h2>bigger is $c</h2>";
		}