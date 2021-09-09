<?php
/**
Esse script foi customizado para rodar sob um linux, para rodar sob o windows alterar os seguintes parametros.

$port = "COMx";
exec("MODE $port BAUD=9600 PARITY=n DATA=8 XON=on STOP=1");

**/
//define porta onde arduino esta conectado
$port = "/dev/ttyACM0";
// configura velocidade da porta serial linux
exec("stty -F $port raw speed 9600");
//inicia comunicação serial
$fp = fopen($port, 'c+');
//escreve na porta serial
fwrite($fp, "LED1:0");
//fecha comunicação serial
fclose($fp);
?>
