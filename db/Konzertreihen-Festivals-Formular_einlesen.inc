<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  


 while($row = mysqli_fetch_array($ergebnis)) 
  { 
$festivalID     = $row["ID"]; 
$F_bezeichnung 	= $row["bezeichnung"]; 
$F_jahr		 	= $row["jahr"]; 
$F_symbol		= $row["symbol"]; 
$F_beschreibung = $row["beschreibung"];
$F_pdf 			= $row["pdf"];
$F_link			= $row["link"];
 

	}
mysqli_close($verbindung); 
?>