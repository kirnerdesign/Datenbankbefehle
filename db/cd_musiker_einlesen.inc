<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================

$k_m_dz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$k_m_ID[$k_m_dz]       	= $row["ID"]; 
$cd_ID[$k_m_dz] 	= $row["cd_ID"]; 
$musiker_ID[$k_m_dz]	= $row["musiker_ID"]; 
 
$k_m_dz++; 
	}
mysql_close($verbindung); 
?>