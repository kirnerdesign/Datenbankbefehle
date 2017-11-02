<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  


 while($row = mysql_fetch_array($ergebnis)) 
  { 
$lokalID       	= $row["ID"]; 
$lokal 			= $row["lokal"]; 
$L_bild	 		= $row["bild"]; 
$L_ort	 		= $row["ort"];
$L_text			= $row["text"];
 
  }
mysql_close($verbindung); 
?>