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

$k_k_dz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$k_k_ID[$k_k_dz]       	= $row["ID"]; 
$radio_ID[$k_k_dz] 	= $row["radio_ID"]; 
$komponist_ID[$k_k_dz]	= $row["komponist_ID"]; 
 
$k_k_dz++; 
	}
mysql_close($verbindung); 
?>