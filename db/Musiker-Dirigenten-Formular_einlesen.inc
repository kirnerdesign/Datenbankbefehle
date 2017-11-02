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
$musikerID      	= $row["ID"]; 
$M_name      		= $row["name"]; 
$M_komponist		= $row["komponist"];
$M_dirigent 		= $row["dirigent"];
$M_instrumentalist	= $row["instrumentalist"]; 
$M_bild 			= $row["bild"];
$M_vita 			= $row["vita"];
$M_text 			= $row["text"];
$M_link				= $row["link"];
 
	}
mysql_close($verbindung); 
?>