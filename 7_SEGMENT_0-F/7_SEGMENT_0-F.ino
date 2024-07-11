 const int a=13;
const int b=12;
const int c=11;
const int d=10;
const int e=9;
const int f=8;
const int g=7;
const int dp=6;
void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(dp,OUTPUT);
  
  

}

void loop() {
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);                //0
digitalWrite(e,HIGH);  
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);                //1
digitalWrite(e,LOW);  
digitalWrite(f,LOW);
digitalWrite(g,LOW);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,LOW);
digitalWrite(d,HIGH);                //2
digitalWrite(e,HIGH);  
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);


digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);                //3
digitalWrite(e,LOW);  
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);                //4
digitalWrite(e,LOW);  
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);                //5
digitalWrite(e,LOW);  
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);                //6
digitalWrite(e,HIGH);  
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);                //7
digitalWrite(e,LOW);  
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);                //8
digitalWrite(e,HIGH);  
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);                //9
digitalWrite(e,LOW);  
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);                //A
digitalWrite(e,HIGH);  
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);                //b
digitalWrite(e,HIGH);  
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,HIGH);                //c
digitalWrite(e,HIGH);  
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);                //d
digitalWrite(e,HIGH);  
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,HIGH);                //E
digitalWrite(e,HIGH);  
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);                //F
digitalWrite(e,HIGH);  
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,HIGH);
delay(1000);



 
}
