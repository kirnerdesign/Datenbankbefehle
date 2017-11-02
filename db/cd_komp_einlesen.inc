<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================


$k_k_dz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$k_k_ID[$k_k_dz]       	= $row["ID"]; 
$cd_ID[$k_k_dz] 	= $row["cd_ID"]; 
$komponist_ID[$k_k_dz]	= $row["komponist_ID"]; 
 
$k_k_dz++; 
	}
mysql_close($verbindung); 
?>