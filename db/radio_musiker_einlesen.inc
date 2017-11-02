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

$k_m_dz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$k_m_ID[$k_m_dz]       	= $row["ID"]; 
$radio_ID[$k_m_dz] 	= $row["radio_ID"]; 
$musiker_ID[$k_m_dz]	= $row["musiker_ID"]; 
 
$k_m_dz++; 
	}
mysql_close($verbindung); 
?>