<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================


 while($row = mysqli_fetch_array($ergebnis)) 
  { 
$orchesterID       	= $row["ID"]; 
$O_name 			= $row["name"]; 
$O_bild 			= $row["bild"]; 
$O_dirigent 		= $row["dirigent"];
$O_text				= $row["text"];
$O_link 			= $row["link"]; 
  
  }
mysqli_close($verbindung); 
?>