#define LED 12
#define BUTTON 7

void setup() {
pinMode(LED,OUTPUT);
pinMode(BUTTON,INPUT);
}

void loop() {

  if(digitalRead(BUTTON)==HIGH){
digitalWrite(LED,HIGH);
delay(1000);
digitalWrite(LED,LOW);
 }
}
