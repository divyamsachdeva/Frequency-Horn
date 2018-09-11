int i,b = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(b,OUTPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(b,HIGH);
delay(30);
digitalWrite(b,LOW);
delay(570);
Serial.println(1);
Serial.println(2);

for(i=1;i<=2;i++)
{
  digitalWrite(b,HIGH);
  delay(30);
  digitalWrite(b,LOW);
  delay(270);
}
Serial.println(3);

for(i=1;i<=4;i++)
{
  digitalWrite(b,HIGH);
  delay(30);
  digitalWrite(b,LOW);
  delay(120);
}
Serial.println(4);

for(i=1;i<=6;i++)
{
  digitalWrite(b,HIGH);
  delay(30);
  digitalWrite(b,LOW);
  delay(70);
}
Serial.println(5);

for(i=1;i<=10;i++)
{
  digitalWrite(b,HIGH);
  delay(30);
  digitalWrite(b,LOW);
  delay(30);
}
}
