<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================


$kbdz=1; $block=10;
 while($row = mysqli_fetch_array($ergebnis)) 
  { 
$orchesterID[$kbdz]       	= $row["ID"]; 
$O_name[$kbdz] 				= $row["name"];
$bild[$kbdz] 				= $row["bild"];
$dirigent[$kbdz]			= $row["dirigent"]; 
$text[$kbdz] 				= $row["text"];
$link[$kbdz] 				= $row["link"];
 
$kbdz++; 
	}
mysqli_close($verbindung); 
?>