#define POT A0
int ledPinR = 11;
int ledPinG = 10;
int ledPinB = 9;
 
void setup() { 
  pinMode(ledPinR, OUTPUT); 
  pinMode(ledPinG, OUTPUT); 
  pinMode(ledPinB, OUTPUT);
  Serial.begin(9600);
  pinMode(POT, INPUT);
} 


void loop() {
  int val = analogRead(POT);

  analogWrite(ledPinR, map(val, 0, 1023, 0, 255));
  analogWrite(ledPinG, map(val, 0, 1023, 0, 255)); 
  analogWrite(ledPinB, map(val, 0, 1023, 0, 255));
}