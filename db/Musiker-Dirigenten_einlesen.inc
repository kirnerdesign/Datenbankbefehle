<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  

$m_dz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$musikerID[$m_dz]       	= $row["ID"]; 
$name[$m_dz]       			= $row["name"]; 
$komponist[$m_dz] 			= $row["komponist"];
$dirigent[$m_dz] 			= $row["dirigent"];
$instrumentalist[$m_dz]		= $row["instrumentalist"]; 
$bild[$m_dz] 				= $row["bild"];
$vita[$m_dz] 				= $row["vita"];
$text[$m_dz] 				= $row["text"];
$link[$m_dz] 				= $row["link"];
 
$m_dz++; 
	}
mysql_close($verbindung); 
?>