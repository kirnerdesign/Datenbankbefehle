<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================


$LPdz=1; 
 while($row = mysqli_fetch_array($ergebnis)) 
  { 
$LP_ID[$LPdz]       	= $row["ID"]; 
$LP_name[$LPdz] 	= $row["NAME"]; 
 
$LPdz++; 
	}
mysqli_close($verbindung); 
?>