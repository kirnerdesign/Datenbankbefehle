<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  



 while($row = mysql_fetch_array($ergebnis)) 
  {
$ID 			= $row["ID"];  
$aRAUM 		= $row["RAUM"];
$aPOSITION 	= $row["POSITION"];
$aUNTERPOS 	= $row["UNTERPOS"]; 
$aNAME 		= $row["NAME"]; 
$aSORT1		= $row["SORT1"]; 
$aSORT2 		= $row["SORT2"];
$aBILD 		= $row["BILD"];
$aORDNER 		= $row["ORDNER"]; if (substr($aORDNER,0,2)=='12'){$aORDNER=substr($aORDNER,2,99);}
$aBEWERTUNG 	= $row["BEWERTUNG"];     
$aKOMMENTAR 	= $row["KOMMENTAR"];
$aNOTIZEN 		= $row["NOTIZEN"]; if ($aNOTIZEN=='Digitalisiert'){ $aNOTIZEN=''; $aSORT1=='exportieren';}
$aDATUM 		= $row["DATUM"];

}
  
mysql_close($verbindung);
?>