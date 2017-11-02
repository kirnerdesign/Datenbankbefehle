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

$mtdz=1; 
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$musiktitelID[$mtdz]   	= $row["ID"]; 
$T_titel[$mtdz]			= $row["titel"];
$T_komponist[$mtdz] 	= $row["komponist"];
$T_interpret[$mtdz]		= $row["interpret"]; 
$T_aufnahme[$mtdz] 		= $row["aufnahme"];
$T_minuten[$mtdz]		= $row["minuten"];
$T_text[$mtdz] 			= $row["text"];
$T_link[$mtdz] 			= $row["link"];
 
$mtdz++; 
	}
mysql_close($verbindung); 
?>