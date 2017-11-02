<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  

$k_t_dz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$k_t_ID[$k_t_dz]       	= $row["ID"]; 
$konzert_ID[$k_t_dz] 	= $row["konzert_ID"]; 
$musiktitel_ID[$k_t_dz]	= $row["musiktitel_ID"]; 
 
$k_t_dz++; 
	}
mysql_close($verbindung); 
?>