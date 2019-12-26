String s;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(13, OUTPUT); //OUTPUT:LEFT NEGATIVE
  pinMode(12, OUTPUT);             //POSITIVE
  pinMode(10, OUTPUT); //RIGHT        POSITIVE
  pinMode(11, OUTPUT);            //NEGATIVE
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  Serial.begin(9600);
}

void loop() {
char c;
int l, r;
while(Serial.available())
{
  
  delay(10);
  char c=Serial.read();
  s+=c;
}
 if(s=="autonomous")
 {
  l = digitalRead(4);
  r = digitalRead(5);
  if(r==1&&l==1)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
  }
  else if(r==0||l==0)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    delay(2000);
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    delay(1000);  
   }  
 }
 else if(s="manual")
 {
  c=Serial.read(); 
  if(c=='w')
  {
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
  }
  else if(c=='s')
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
  }
  else if(c=='a')
  {
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);    
  }
 }
 s="";
}
