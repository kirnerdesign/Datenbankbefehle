<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================


 while($row = mysqli_fetch_array($ergebnis)) 
  	{ 
//$cdID       		= $row["ID"];
$bezeichnung		= $row["bezeichnung"];
$symbol			 	= $row["symbol"];
$datum		 		= $row["datum"];
$ort	 			= $row["ort"];
$festival			= $row["festival"];     
$komponist			= $row["komponisten"];
$musiker			= $row["musiker"]; 
$orchester  		= $row["orchester"];
$musiktitel  		= $row["musiktitel"];
$text 				= $row["text"];
$link	 			= $row["link"];
$pdf 				= $row["pdf"];
	}
mysqli_close($verbindung); 
?>