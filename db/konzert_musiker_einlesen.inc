<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  

$k_m_dz=1; $block=10;
 while($row = mysqli_fetch_array($ergebnis)) 
  { 
$k_m_ID[$k_m_dz]       	= $row["ID"]; 
$konzert_ID[$k_m_dz] 	= $row["konzert_ID"]; 
$musiker_ID[$k_m_dz]	= $row["musiker_ID"]; 
 
$k_m_dz++; 
	}
mysqli_close($verbindung); 
?>