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

$kkdz=1; 
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$komponistID[$kkdz]   = $row["ID"]; 
$K_name[$kkdz] 			= $row["name"]; 
$K_bild[$kkdz]		 	= $row["bild"]; 
$K_geboren[$kkdz]		= $row["geboren"]; 
$K_gebjahr[$kkdz]		= $row["gebjahr"]; 
$K_gestorben[$kkdz]		= $row["gestorben"];
$K_vita[$kkdz] 			= $row["text"];
$K_text[$kkdz] 			= $row["text"];
$K_link[$kkdz] 			= $row["text"];
 
$kkdz++; 
	}
mysql_close($verbindung); 
?>