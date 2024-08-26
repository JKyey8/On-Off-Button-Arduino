
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode (12,OUTPUT);
  pinMode(11,INPUT);
  pinMode(5,OUTPUT);
  digitalWrite(11,HIGH);
  digitalWrite(5,HIGH);

}
void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(2) == HIGH && digitalRead(11) == HIGH){
for (int fadeValue = 255; fadeValue >= 0; fadeValue = fadeValue -= 5){
analogWrite(11,fadeValue);
analogWrite(5,fadeValue);

delay(30);
};
} else if (digitalRead(2) == HIGH && digitalRead(11) == LOW){
 // digitalWrite(11,LOW);
// digitalWrite(5,HIGH);

for (int fadeValue = 0; fadeValue <= 255; fadeValue = fadeValue += 5){
analogWrite(11,fadeValue);
analogWrite(5,fadeValue);

delay(30);

};
// digitalWrite(11,HIGH);
 // digitalWrite(5,LOW);

}
}




