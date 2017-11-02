<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  


 while($row = mysqli_fetch_array($ergebnis)) 
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
mysqli_close($verbindung); 
?>