int a=2; //.CIR
int b=3; //.LIR
int c=4; //.RIR
int d=5; //.ELIR
int e=6; //.ERIR
int f=7; //.right motor(+) 
int g=8; //.right motor(-)
int h=12;//.left motor(+)
int i=13;//.left motor(-)
int m1=9;
int m2=10;
void setup()
{
  Serial.begin(9600);
  pinMode(a,INPUT);
  pinMode(b,INPUT);
  pinMode(c,INPUT);
  pinMode(d,INPUT);
  pinMode(e,INPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);
  pinMode(i,OUTPUT);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
}
void loop()
{
  int v=digitalRead(a);
  int w=digitalRead(b);
  int x=digitalRead(c);
  int y=digitalRead(d);
  int z=digitalRead(e);

  if(v==HIGH && x==LOW && z==LOW && w==LOW && y==LOW)
  {
    analogWrite(m1,120);
    analogWrite(m2,120);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    digitalWrite(h,HIGH);
    digitalWrite(i,LOW);
  }
  else if(x==HIGH && v==LOW && z==LOW && w==LOW && y==LOW)
  {
    analogWrite(m1,180);
    analogWrite(m2,180);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    digitalWrite(h,HIGH);   //.right
    digitalWrite(i,LOW);
  }
  else if(z==HIGH && x==LOW && y==LOW && v==LOW && w==LOW)
  {
    analogWrite(m1,200);
    analogWrite(m2,200);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);    //.right
    digitalWrite(h,HIGH);
    digitalWrite(i,LOW);
  }
  else if(x==HIGH && z==HIGH && y==LOW && w==LOW && v==LOW)
  {
    analogWrite(m1,180);
    analogWrite(m2,180);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);     //.right
    digitalWrite(h,HIGH);
    digitalWrite(i,LOW);
  }
  else if(v==HIGH && x==HIGH && y==LOW && z==LOW && w==LOW)
  {
    analogWrite(m1,180);
    analogWrite(m2,180);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    digitalWrite(h,HIGH);  //.right 
    digitalWrite(i,LOW);
  }
  else if(v==HIGH && x==HIGH && z==HIGH && y==LOW && w==LOW)
  {
    analogWrite(m1,120);
    analogWrite(m2,200);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);  //.right
    digitalWrite(h,HIGH);
    digitalWrite(i,LOW);
  }
  else if(w==HIGH && x==LOW && y==LOW && z==LOW && v==LOW)
  {
    analogWrite(m1,180);
    analogWrite(m2,180);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);  //.left
    digitalWrite(h,LOW);
    digitalWrite(i,HIGH);
  }
  else if(y==HIGH && x==LOW && z==LOW && w==LOW && v==LOW)
  {
    analogWrite(m1,200);
    analogWrite(m2,200);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);  //.left
    digitalWrite(h,LOW);
    digitalWrite(i,HIGH);
  }
  else if(w==HIGH && y==HIGH && x==LOW && v==LOW && z==LOW)
  {
    analogWrite(m1,180);
    analogWrite(m2,180);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);  //.left
    digitalWrite(h,LOW);
    digitalWrite(i,HIGH);
  }
  else if(v==HIGH && w==HIGH && x==LOW && y==LOW && z==LOW)
  {
    analogWrite(m1,180);
    analogWrite(m2,180);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);  //.left
    digitalWrite(h,LOW);
    digitalWrite(i,HIGH);
  }
  else if(v==HIGH && w==HIGH && y==HIGH && x==LOW && z==LOW)
  {
    analogWrite(m1,200);
    analogWrite(m2,200);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);  //.left
    digitalWrite(h,LOW);
    digitalWrite(i,HIGH);
  }
  else if(v==LOW && w==LOW && x==LOW && y==LOW && z==LOW)
  { 
    analogWrite(m1,150);
    analogWrite(m2,150);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    digitalWrite(h,LOW);
    digitalWrite(i,LOW);
    
  }
  else if(v==HIGH && w==HIGH && x==HIGH && y==HIGH && z==HIGH)
  {
    analogWrite(m1,150);
    analogWrite(m2,150);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(h,HIGH);
    digitalWrite(i,HIGH);
    
  }
  Serial.print("elir: ");
  Serial.print(y);
  Serial.print("  lir: ");
  Serial.print(w);
  Serial.print("  cir: ");
  Serial.print(v);
  Serial.print(" rir: ");
  Serial.print(x);
  Serial.print("  erir: ");
  Serial.print(z);
  Serial.print('\n'); 
  
}

