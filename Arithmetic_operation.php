<html>
<head>
	<title>STATIC INPUTS TYPES......</title>
</head>
<body>

	<?php
		echo "<h1 style='color:green'>VOTTING ELIGIBILITY</h1>";
		$age=14;
		$age2=19;
		if($age>=18)
		{
			echo "Eligible";
		}
		else
		{
			echo "Not Eligible";
		}
		echo "<br>";
		if($age2>=18)
		{
			echo "Eligible";
		}
		else
		{
			echo "Not Eligible";
		}
		echo "<hr>";
		echo "<h1 style='color:orange'>CHECK NUMBER EVEN OR ODD</h1>";
		$a=8;
		$b=9;
		if($a%2==0)
		{
			echo "even number";
		}
		else
		{
			echo "odd number";
		}
		echo "<br>";
		if($b%2==0)
		{
			echo "even number";
		}
		else
		{
			echo "odd number";
		}
		echo "<hr>";
		echo "<h1 style='color:green'>AREA & PERIMETER OF RECTANGLES</h1>";
		$l=12;
		$b=9;
		$area=$l*$b;
		$peri=2*($l+$b);
		echo "<h1>Area of Rectangle:</h1>".$area;
		echo "<h1>Perimeter of Rectangle:</h1>".$peri;
		echo "<hr>";
		echo "<h1 style='color:pink'>AREA & CIRCUMFERENCE OF CIRCLE</h1>";
		$r=8;
		$area_circle=3.14*$r*$r;
		$circum=3.14*$r;
		echo "<h1>Area of Circle:</h1>".$area_circle;
		echo "<h1>Circumference of Circle:</h1>".$circum;
		echo "<hr>";
		echo "<h1 style='color:red'>AVERAGE OF THREE NUMBERS</h1>";
		$fn=9;
		$sc=4;
		$th=5;
		$avg=($fn+$sc+$th)/3;
		echo "<h1>Average of three Numbers:</h1>".$avg;
		echo "<hr>";
		echo "<h1 style='color:blue'> ARITHMETIC OPERATION</h1>";
		$fn=10;
		$sc=4;
		$add=$fn+$sc;
		echo "<h1>Sum of to Numbers:</h1>".$add;
		echo"<br>";
		$sub=$fn-$sc;
		echo "<h1>Substraction of to Numbers:</h1>".$sub;
		echo"<br>";
		$mult=$fn*$sc;
		echo "<h1>Multiplication of to Numbers:</h1>".$mult;
		echo"<br>";
		$div=$fn+$sc;
		echo "<h1>Divsion of to Numbers:</h1>".$div;
	?>
	
</body>
</html>