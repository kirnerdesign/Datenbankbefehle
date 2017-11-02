<?php 
//============= server ===============
include('x_daten_standard.inc');
//====================================
  

$dz=1;
$abspielbar=0;
$aufgenommen=0;
 while($row = mysql_fetch_array($ergebnis)) 
  {
$aID[$dz] 			= $row["ID"];  
$aRAUM[$dz] 		= $row["RAUM"];
$aPOSITION[$dz] 	= $row["POSITION"];
$aUNTERPOS[$dz] 	= $row["UNTERPOS"]; 
$aNAME[$dz] 		= $row["NAME"]; $ALPHA=substr(ucwords($aNAME[$dz]),0,1); if ($dz>1 && (substr(ucwords($aNAME[$dz-1]),0,1) <> $ALPHA)) { 
									$alphaD[$dz] = '<div style=" clear:both; background-color: #0073b1; font-weight:900; text-align:center; width:100%;color:white;">'.$ALPHA.'</div>';} else {$alphaD[$dz]='';}
$aSORT1[$dz] 		= $row["SORT1"]; 
$aSORT2[$dz] 		= $row["SORT2"];
$aBILD[$dz] 		= $row["BILD"];
$aORDNER[$dz] 		= $row["ORDNER"]; if (substr($aORDNER[$dz],0,2)=='12'){$aORDNER[$dz]=substr($aORDNER[$dz],2,99);}
$aBEWERTUNG[$dz] 	= $row["BEWERTUNG"];     
$aKOMMENTAR[$dz] 	= $row["KOMMENTAR"];
$aNOTIZEN[$dz] 		= $row["NOTIZEN"]; if ($aNOTIZEN[$dz]=='Digitalisiert'){ $aNOTIZEN[$dz]=''; $aSORT1[$dz]='exportieren';}
$aDATUM[$dz] 		= $row["DATUM"]; 

if (substr($aSORT1[$dz],0,14)=='bearbeiten mp3' || $aSORT1[$dz]=='bearbeiten wav' || $aSORT1[$dz]=='Digitalisiert'){$aufgenommen++;}
if ($aSORT1[$dz]=='Digitalisiert'){$abspielbar++;}

$dz++;
}
  
mysql_close($verbindung);
?>