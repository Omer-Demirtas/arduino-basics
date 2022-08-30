#define motorPiin 2
#define motorPiin2 3


void setup() {
  pinMode(motorPiin,OUTPUT);
 pinMode(motorPiin2,OUTPUT);
}

void left()
{
  digitalWrite(motorPiin, HIGH);
  delay(500);
  digitalWrite(motorPiin2, LOW);
}

void rigth()
{
  digitalWrite(motorPiin, LOW);
  delay(500);
  digitalWrite(motorPiin2, HIGH);
}

void loop() 
{
  left();
  delay(1000);
  rigth();
  delay(1000);
}
