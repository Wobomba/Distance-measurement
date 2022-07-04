int led = 12;
int sensor= 8;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(sensor)== LOW)
  {
    digitalWrite(led,HIGH);
    
    delay(10);
  }
  else 
  {
    
    digitalWrite(led,LOW);
    delay(10);
    
  }
  
}
