#define ledPin 2
#define motorPin 3
#define led2Pin 4

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop() 
{
  delay(1000);
  digitalWrite(ledPin, HIGH);
  digitalWrite(motorPin, HIGH); 
  digitalWrite(led2Pin, HIGH); 
  delay(1000);
  digitalWrite(ledPin, LOW);
  digitalWrite(motorPin, LOW);  
  digitalWrite(led2Pin, LOW); 
  delay(1000);
}
