<?php
	
	$server = "localhost";
	$username = "root";
	$password = "";
	$database = "arduino";
	
	
	$dbcon = new mysqli($server,$username,$password,$database);
	if ($dbcon->connect_error)
	{
		die("provlima:" .$dbcon->connect_error);
	}
		$DATE = $_GET ['se'];

$ins = "INSERT INTO dedomena (pedio) VALUES ('$DATE')";

		if ($dbcon->query($ins)===true)
		{
			echo "mpikan";
		}
		else 
		{
			echo "tepo";	
		}

?>
