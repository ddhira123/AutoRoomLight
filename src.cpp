int in1 = 9;
int sensor = 8;
unsigned long t=0;

void setup() 
{
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(sensor, INPUT);  
  digitalWrite(in1,HIGH);
}


void loop() 
{
  digitalWrite(in1,LOW);
  t = millis();
  while(1){
   if(digitalRead(sensor) == HIGH){
    digitalWrite(in1, HIGH);
    t = millis();
   }
   else if(digitalRead(sensor) == LOW && millis() < t+20000){
    digitalWrite(in1, HIGH);
   }
   else if(digitalRead(sensor) == LOW){
    digitalWrite(in1, LOW);
   }
   Serial.print(digitalRead(sensor));
   Serial.print(" ");
   Serial.print(millis()-t);
   Serial.println();
  }
}
