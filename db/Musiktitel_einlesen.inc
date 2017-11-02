<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  

$mtdz=1; 
 while($row = mysqli_fetch_array($ergebnis)) 
  { 
$musiktitelID[$mtdz]   	= $row["ID"]; 
$T_titel[$mtdz]			= $row["titel"];
$T_komponist[$mtdz] 	= $row["komponist"];
$T_interpret[$mtdz]		= $row["interpret"]; 
$T_aufnahme[$mtdz] 		= $row["aufnahme"];
$T_minuten[$mtdz]		= $row["minuten"];
$T_text[$mtdz] 			= $row["text"];
$T_link[$mtdz] 			= $row["link"];
 
$mtdz++; 
	}
mysqli_close($verbindung); 
?>