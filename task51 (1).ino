char reading;
void setup() {
pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
Serial.begin(9600);
 
 
}
void loop() {
 if(Serial.available()){
 reading=Serial.read();

switch(reading){ 
case 'F': 
analogWrite(10,127);
analogWrite(11,127);
digitalWrite(4,HIGH);
digitalWrite(3,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
break;
case 'B':
analogWrite(10,127);
analogWrite(11,127);
digitalWrite(4,LOW);
digitalWrite(3,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
break;
case 'R':
analogWrite(10,0);
analogWrite(11,127);
digitalWrite(4,HIGH);
digitalWrite(3,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
break;
case 'L':
analogWrite(10,127);
analogWrite(11,0);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
break;
}

 }
}