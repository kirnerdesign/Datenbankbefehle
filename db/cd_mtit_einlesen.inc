<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================


$k_t_dz=1; $block=10;
 while($row = mysqli_fetch_array($ergebnis)) 
  { 
$k_t_ID[$k_t_dz]       	= $row["ID"]; 
$cd_ID[$k_t_dz] 	= $row["cd_ID"]; 
$musiktitel_ID[$k_t_dz]	= $row["musiktitel_ID"]; 
 
$k_t_dz++; 
	}
mysqli_close($verbindung); 
?>