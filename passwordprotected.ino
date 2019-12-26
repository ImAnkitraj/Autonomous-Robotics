
String s;
char c;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);//OUTPUT:1
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT); 
}

void loop() 
{
  // put your main code here, to run repeatedly:
  while (Serial.available())
  { 
    delay(20);
//    s=Serial.readString();
//    if(s=="password")
//    {
      c=Serial.read();
      Serial.println(c);
      if(c=='W'||c=='w')
      {
        digitalWrite(12,HIGH);
        digitalWrite(13,LOW);
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
      }
      else if(c=="x"||c=='X')
      {
         digitalWrite(12,LOW);
        digitalWrite(13,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
      }
      else if(c=="A"||c=='a')
      {
        digitalWrite(13,HIGH);
        digitalWrite(12,LOW);
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
      }
      else if(c=="S"||c=='s')
      {
        digitalWrite(13,HIGH);
        digitalWrite(12,LOW);
        digitalWrite(11,HIGH);
        digitalWrite(10,LOW);
      }
      else if(c=="D"||c=='d')   
      {
       digitalWrite(13,LOW);
       digitalWrite(12,HIGH);
       digitalWrite(11,HIGH);
       digitalWrite(10,LOW);
      }
    }
}
