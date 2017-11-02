<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  


 while($row = mysqli_fetch_array($ergebnis)) 
  { 
$lokalID       	= $row["ID"]; 
$lokal 			= $row["lokal"]; 
$L_bild	 		= $row["bild"]; 
$L_ort	 		= $row["ort"];
$L_text			= $row["text"];
 
  }
mysqli_close($verbindung); 
?>