int soundSensor = 2;

void setup() 
{
  Serial.begin(9600); 
  
  pinMode(soundSensor, INPUT);
}

int soundCOunter = 0;

void loop() 
{
  int soundVal = digitalRead(soundSensor);

  if(soundVal != 0) 
  {
    soundCOunter++;
  }
  else if(soundCOunter != 0)
  {
    Serial.println(soundCOunter);
    soundCOunter = 0;
  }
}
