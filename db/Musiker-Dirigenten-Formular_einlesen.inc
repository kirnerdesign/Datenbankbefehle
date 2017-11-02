<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  


 while($row = mysql_fetch_array($ergebnis)) 
  { 
$musikerID      	= $row["ID"]; 
$M_name      		= $row["name"]; 
$M_komponist		= $row["komponist"];
$M_dirigent 		= $row["dirigent"];
$M_instrumentalist	= $row["instrumentalist"]; 
$M_bild 			= $row["bild"];
$M_vita 			= $row["vita"];
$M_text 			= $row["text"];
$M_link				= $row["link"];
 
	}
mysql_close($verbindung); 
?>