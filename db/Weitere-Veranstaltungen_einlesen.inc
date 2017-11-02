<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  

$kbdz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$eventID[$kbdz]       	= $row["ID"]; 
$bezeichnung[$kbdz] 	= $row["bezeichnung"]; 
$symbol[$kbdz]		 	= $row["symbol"];
$datum[$kbdz]		 	= $row["datum"]; 
$ort[$kbdz]		 		= $row["ort"];
$festival[$kbdz]		= $row["festival"];
$aufnahme[$kbdz]		= $row["aufnahme"];  
$text[$kbdz] 			= $row["text"];
$link[$kbdz] 			= $row["link"];
$pdf[$kbdz] 			= $row["pdf"];
 
$kbdz++; 
	}
mysql_close($verbindung); 
?>