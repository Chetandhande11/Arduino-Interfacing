const int Led1=13;
const int Led2=12;



void setup() {
pinMode(Led1,OUTPUT);  
pinMode(Led2,OUTPUT);   
}

void loop() {
digitalWrite(Led1,HIGH);
digitalWrite(Led2,LOW);
delay(2000);
digitalWrite(Led2,HIGH);
digitalWrite(Led1,LOW);
delay(2000);

}
