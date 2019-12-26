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
  int l,r;
    l=digitalRead(4);
    r=digitalRead(5);
    if(l==0&&r==1)
    {
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
    }
    else if(l==0&&r==0)
    {
       digitalWrite(12,HIGH);
       digitalWrite(13,LOW);    
       digitalWrite(10,LOW);
       digitalWrite(11,HIGH);
    }
    else if(l==1&&r==1)
    {
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
        digitalWrite(13,HIGH);
        delay(2000);
            
    }

    

}
