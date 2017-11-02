<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================


 while($row = mysql_fetch_array($ergebnis)) 
  { 
$komponistID  	= $row["ID"]; 
$K_name 		= $row["name"]; 
$K_bild	 		= $row["bild"]; 
$K_geboren		= $row["geboren"];
$K_gebjahr		= $row["gebjahr"];  
$K_gestorben	= $row["gestorben"];
$K_vita 		= $row["vita"];
$K_text 		= $row["text"];
$K_link			= $row["link"];
 
	}
mysql_close($verbindung); 
?>