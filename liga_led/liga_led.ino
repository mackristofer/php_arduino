int led = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
Serial.begin(9600);
}
/**
 * Função que lê uma string na porta serial e devolve a mesma.
 */
 String leStringSerial(){
  String conteudo = "";
  char caracter;

  //Enquanto receber algo na serial
  while(Serial.available() > 0) {
    //lê byte da serial
    caracter = Serial.read();
    //ignora caracter de quebra de linha = enter
    if(caracter != '\n'){
      //concatena valores
      conteudo.concat(caracter);
    }
    //aguarda buffer serial ler proximo caracter
    delay(10);
  }
  Serial.print("Recebi: ");
  Serial.println(conteudo);

  return conteudo;
 }

void loop() {
  // put your main code here, to run repeatedly:
//se receber algo na serial
if(Serial.available() > 0) {
  //lê toda a strig com a função
  String recebido = leStringSerial();
  //chega o valor retornado pela função
  if(recebido == "LED1:1"){
    digitalWrite(led, HIGH);
  }
  if(recebido == "LED1:0"){
    digitalWrite(led, LOW);
  }
}
}
