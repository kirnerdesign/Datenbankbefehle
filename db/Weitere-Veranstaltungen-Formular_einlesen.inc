<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  


 while($row = mysql_fetch_array($ergebnis)) 
  	{ 
//$eventID       		= $row["ID"];
$bezeichnung		= $row["bezeichnung"];
$symbol			 	= $row["symbol"];
$datum		 		= $row["datum"];
$ort	 			= $row["ort"];
$festival			= $row["festival"];
$aufnahmen			= $row["aufnahmen"];       
$text 				= $row["text"];
$link	 			= $row["link"];
$pdf 				= $row["pdf"];
	}
mysql_close($verbindung); 
?>