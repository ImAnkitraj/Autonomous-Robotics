void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(2,INPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
int a=digitalRead(4);
int b=digitalRead(2);
if(a==1&&b==0)
{
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
}
else if(a==0&&b==1)
{
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
}
else
{
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
}
}
