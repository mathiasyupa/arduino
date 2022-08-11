int PULSADOR = 2; 
int LED = 3;
int ESTADO = LOW;

void setup() {
  pinMode(PULSADOR, INPUT);    //pin 2 como entrada
  pinMode(LED, OUTPUT);   //pin 3 como salida
}

void loop() {
 while(digitalRead(PULSADOR) == LOW){   //espero qeu el pulsador se presione
  
 }
digitalWrite(LED, HIGH);              // enciendo led
delay(5000);                          // espera de 5 segundos
digitalWrite(LED, LOW);               // apagar led
 while(digitalRead(PULSADOR) == HIGH){      // antirebote
  
 }
}
