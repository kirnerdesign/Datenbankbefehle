<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  

$dz=1;
 while($row = mysqli_fetch_array($ergebnis)) 
  { 
$bezeichnung[$dz] 	= $row["bezeichnung"]; 
$datum[$dz] 		= $row["datum"];   
$festival_ID[$dz]	= $row["festival"]; 
$konzert_ID[$dz]	= $row["ID"]; 
$dz++; 
	}
mysqli_close($verbindung); 
?>