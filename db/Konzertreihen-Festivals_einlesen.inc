<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  

$mfdz=1; 
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$festivalID[$mfdz]      = $row["ID"]; 
$F_bezeichnung[$mfdz] 	= $row["bezeichnung"]; 
$F_jahr[$mfdz]		 	= $row["jahr"]; 
$F_symbol[$mfdz]		= $row["symbol"]; 
$F_beschreibung[$mfdz] 	= $row["beschreibung"];
$F_pdf[$mfdz] 			= $row["pdf"];
$F_link[$mfdz] 			= $row["link"];
 
$mfdz++; 
	}
mysql_close($verbindung); 
?>