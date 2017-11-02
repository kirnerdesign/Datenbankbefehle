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