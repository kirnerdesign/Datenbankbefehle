<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  

$kbdz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$radioID[$kbdz]       		= $row["ID"]; 
$bezeichnung[$kbdz] 	= $row["bezeichnung"]; 
$symbol[$kbdz]		 	= $row["symbol"];
$datum[$kbdz]		 	= $row["datum"]; 
$ort[$kbdz]		 		= $row["ort"];
$festival[$kbdz]		= $row["festival"];  
$komponisten[$kbdz]		= $row["komponisten"];
$musiker[$kbdz]			= $row["musiker"]; 
$orchester[$kbdz]  		= $row["orchester"];
$aufnahmen[$kbdz]  		= $row["aufnahmen"];
$text[$kbdz] 			= $row["text"];
$link[$kbdz] 			= $row["link"];
$pdf[$kbdz] 			= $row["pdf"];
 
$kbdz++; 
	}
mysql_close($verbindung); 
?>