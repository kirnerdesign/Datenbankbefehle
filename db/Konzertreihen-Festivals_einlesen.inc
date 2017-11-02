<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
$verbindung = mysql_connect ($server, $Benutzer, $Kennwort);
//============================================================ Fehler-check 1
if (!$verbindung) {die('Keine Verbindung möglich: ' . mysql_error());}
//============================================================
$db_selected = mysql_select_db($Datenbank, $verbindung);
//============================================================ Fehler-check 2
if (!$db_selected) {die('Auswahl der Datenbank nicht möglich: ' . mysql_error());}
//============================================================
$ergebnis = mysql_query($sql, $verbindung);
//============================================================ Fehler-check 3
if (!$ergebnis) {die('Anfrage fehlgeschlagen: ' . mysql_error());}
//============================================================

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