
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode (12,OUTPUT);
  pinMode(2,INPUT);
  digitalWrite(12,HIGH);

}
void loop() {
  // put your main code here, to run repeatedly:

  
if(digitalRead(2) == HIGH && digitalRead(12) == HIGH) {
digitalWrite(12,LOW);

} else if (digitalRead(2) == HIGH && digitalRead(12) == LOW)  {
digitalWrite(12,HIGH);

}



}
