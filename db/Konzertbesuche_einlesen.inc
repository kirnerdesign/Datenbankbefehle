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

$kbdz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$eventID[$kbdz]       	= $row["ID"]; 
$bezeichnung[$kbdz] 	= $row["bezeichnung"]; 
$symbol[$kbdz]		 	= $row["symbol"];
$datum[$kbdz]		 	= $row["datum"]; 
$ort[$kbdz]		 		= $row["ort"];
$festival[$kbdz]		= $row["festival"];  
$komponisten[$kbdz]		= $row["komponisten"];
$musiker[$kbdz]			= $row["musiker"]; 
$orchester[$kbdz]  		= $row["orchester"];
$aufnahmen[$kbdz]  		= $row["aufnahmen"];
$text[$kbdz] 			= $row["text"];
$link[$kbdz] 			= $row["link"];
$pdf[$kbdz] 			= $row["pdf"];
 
$kbdz++; 
	}
mysql_close($verbindung); 
?>