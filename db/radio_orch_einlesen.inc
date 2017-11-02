<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  

$k_o_dz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$k_o_ID[$k_o_dz]       	= $row["ID"]; 
$radio_ID[$k_o_dz] 	= $row["radio_ID"]; 
$orchester_ID[$k_o_dz]	= $row["orchester_ID"]; 
 
$k_o_dz++; 
	}
mysql_close($verbindung); 
?>