<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  

$kbdz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$lokalID[$kbdz]       	= $row["ID"]; 
$lokal[$kbdz] 			= $row["lokal"]; 
$L_bild[$kbdz]		 	= $row["bild"]; 
$L_ort[$kbdz]		 	= $row["ort"]; 
$L_text[$kbdz] 			= $row["text"];
 
$kbdz++; 
	}
mysql_close($verbindung); 
?>