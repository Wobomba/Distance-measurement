int led = 12;
int sensor= 0;
int val = 0;                 // variable to store the values from sensor(initially zero)

void setup()
{
//  pinMode(led,OUTPUT);
//  pinMode(sensor,INPUT);
  Serial.begin(9600);
}
void loop()
{

  val = analogRead(sensor);       // reads the value of the sharp sensor
  Serial.println(val);     
   delay(100); 
//  if (digitalRead(sensor)== LOW)
//  {
//    digitalWrite(led,HIGH);
//    
//    delay(10);
//  }
//  else 
//  {
//    
//    digitalWrite(led,LOW);
//    delay(10);
//    
//  }
  
}
