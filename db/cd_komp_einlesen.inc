<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================


$k_k_dz=1; $block=10;
 while($row = mysqli_fetch_array($ergebnis)) 
  { 
$k_k_ID[$k_k_dz]       	= $row["ID"]; 
$cd_ID[$k_k_dz] 	= $row["cd_ID"]; 
$komponist_ID[$k_k_dz]	= $row["komponist_ID"]; 
 
$k_k_dz++; 
	}
mysqli_close($verbindung); 
?>