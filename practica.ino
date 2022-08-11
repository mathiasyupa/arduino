
#include <Servo.h>

Servo servo1;

int PINSERVO = 2;
int PULSOMIN = 700;
int PULSOMAX = 2350;
int VALORPOT;
int ANGULO;
int POT = 0;
int TRIG = 10;
int ECO = 9;
int DURACION;
int DISTANCIA;

void setup(){
  servo1.attach(PINSERVO, PULSOMIN, PULSOMAX );
  // LAS ENTRADAS ANALOGUICAS NO REQUIEREN INICIALIZACION
  pinMode(TRIG, OUTPUT);
  pinMode(ECO,  INPUT);
  Serial.begin(9600);
}

void loop(){
  
 VALORPOT = analogRead(POT);
 ANGULO = map(VALORPOT, 0, 1023, 0, 180);
 servo1.write(ANGULO);
 delay(20);
 if(DISTANCIA<=15) {
  servo1.write(0);
  delay(2000);
  servo1.write(90);
  delay(2000);
 }
}
