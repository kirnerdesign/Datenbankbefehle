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
$komponistID  	= $row["ID"]; 
$K_name 		= $row["name"]; 
$K_bild	 		= $row["bild"]; 
$K_geboren		= $row["geboren"];
$K_gebjahr		= $row["gebjahr"];  
$K_gestorben	= $row["gestorben"];
$K_vita 		= $row["vita"];
$K_text 		= $row["text"];
$K_link			= $row["link"];
 
	}
mysql_close($verbindung); 
?>