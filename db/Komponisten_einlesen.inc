<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================


$kkdz=1; 
 while($row = mysqli_fetch_array($ergebnis)) 
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
mysqli_close($verbindung); 
?>