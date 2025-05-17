int ledPinr = 11;
int ledPinv = 5;
int ledPinb = 10;
int buzzerPinr = 8;
int ledPina = 6;
void setup() {
  pinMode(ledPinv, OUTPUT);
  pinMode(ledPinb, OUTPUT);
  pinMode(ledPinr, OUTPUT);
  pinMode(buzzerPinr, OUTPUT);
  pinMode(ledPina, OUTPUT);
}

void loop() {
  for(int i = 128; i >= 0; i--){
    analogWrite(ledPinv, 255 - i);
    delay(1000); 
  }
  for(int i = 0; i <= 128; i++){
    analogWrite(ledPinr, 255 - i); 
    delay(1000);
  }
  for(int i = 0; i <= 128; i++){
    analogWrite(ledPina, 255 - i); 
    delay(1000);
  }
    for(int i = 0; i <= 128; i++){
    analogWrite(ledPinb, 255 - i); 
    delay(1000);
  }


}
