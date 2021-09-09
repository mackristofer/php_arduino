
int led_y = 10;
int led_r = 8;
int led_g = 9;


void setup() {

pinMode(led_y, OUTPUT);
pinMode(led_r, OUTPUT);
pinMode(led_g, OUTPUT);
Serial.begin(9600);
Serial.println("inicio");

}

void loop() {
  
 char valor;
 valor = Serial.read();
   if(valor == 'a'){
    Serial.println(valor);
    digitalWrite(led_y, !digitalRead(led_y));
   }

      if(valor == 'e'){
        Serial.println(valor);
    digitalWrite(led_r, !digitalRead(led_r));
   }

      if(valor == 'v'){
        Serial.println(valor);
    digitalWrite(led_g, !digitalRead(led_g));
   }

}
