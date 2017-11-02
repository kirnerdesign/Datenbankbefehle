<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================


$LPdz=1; 
 while($row = mysql_fetch_array($ergebnis)) 
  { 
$LP_ID[$LPdz]       	= $row["ID"]; 
$LP_name[$LPdz] 	= $row["NAME"]; 
 
$LPdz++; 
	}
mysql_close($verbindung); 
?>