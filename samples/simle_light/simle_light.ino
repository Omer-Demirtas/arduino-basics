int lightPort = 13;
int dTime = 1000;

void setup()
{
  pinMode(lightPort, OUTPUT);
}

void loop()
{
  digitalWrite(lightPort, HIGH);
  delay(1 * dTime);
  digitalWrite(lightPort, LOW);
  delay(1 * dTime);
}
