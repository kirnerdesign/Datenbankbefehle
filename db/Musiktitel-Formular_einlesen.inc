<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  


 while($row = mysql_fetch_array($ergebnis)) 
  { 
$musiktitelID      	= $row["ID"]; 
$T_titel 			= $row["titel"];
$T_komponist 		= $row["komponist"];
$T_interpret		= $row["interpret"]; 
$T_aufnahme 		= $row["aufnahme"];
$T_minuten			= $row["minuten"];
$T_text 			= $row["text"];
$T_link 			= $row["link"];
 
	}
mysql_close($verbindung); 
?>