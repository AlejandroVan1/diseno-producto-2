#include <Arduino.h>
  int prender=13;
  int pulsador =14;

void setup() {


  pinMode (prender, OUTPUT);
  digitalWrite(prender, HIGH);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pulsador, INPUT);
}

void loop(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(5000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(5000);
  if ( digitalRead(pulsador) == LOW ){
    digitalWrite(13, LOW);
  };
  
}

