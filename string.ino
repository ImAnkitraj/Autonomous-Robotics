String s;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //OUTPUT:LEFT NEGATIVE
  pinMode(12, OUTPUT);             //POSITIVE
  pinMode(10, OUTPUT); //RIGHT        POSITIVE
  pinMode(11, OUTPUT);            //NEGATIVE
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available())
{
  
  delay(10);
  char c=Serial.read();
  s+=c;
}
if(s.length()>0)
 { 
  Serial.println(s);
  if(s=="harshita")//move forward
  {
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH); 
  }
  else if(s=="shrivastava")//stop
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);     
  }
  s="";
 }
}
