<?php		
		echo "<h2 style='color:blue'>Array Datatypes</h2>";
		$car= array("Scarpio","Creata","Ford");
		echo "<h3>Array Element 1:<h3>$car[0]<br>";
		echo "<h3>Array Element 2:<h3>$car[1]<br>";
		echo "<h3>Array Element 3:<h3>$car[2]<br>";
		echo "<hr>";
		$days=array("sun","mon","tues","wed");
		for($i=0;$i<count($days);$i++)
		{
			echo $days[$i]."<br>";
		}
		echo"<hr>";
		$dayss=array("day1"=>"mon","day2"=>"tue","day3"=>"wed");
		echo"<pre>";
		print_r ($dayss);
		echo "<hr>"
		foreach ($dayss as $val) 
		{
			echo $val." ";
		}
		echo "<hr>";

		$days1=array("day1"=>"mon","day2"=>"tue","day3"=>"wed");
			foreach($days1 as $key =>$value)
			{
				echo $key." ".$value;
			}
?>
