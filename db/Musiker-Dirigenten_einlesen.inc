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

$m_dz=1; $block=10;
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$musikerID[$m_dz]       	= $row["ID"]; 
$name[$m_dz]       			= $row["name"]; 
$komponist[$m_dz] 			= $row["komponist"];
$dirigent[$m_dz] 			= $row["dirigent"];
$instrumentalist[$m_dz]		= $row["instrumentalist"]; 
$bild[$m_dz] 				= $row["bild"];
$vita[$m_dz] 				= $row["vita"];
$text[$m_dz] 				= $row["text"];
$link[$m_dz] 				= $row["link"];
 
$m_dz++; 
	}
mysql_close($verbindung); 
?>