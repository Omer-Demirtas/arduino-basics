int lightPort = 13;
int dTime = 1000;

class Led {
  private:
    byte pin;
  public:
    Led(byte pin) {
      this->pin = pin;
      init();
    }
    void init() {
      pinMode(pin, OUTPUT);
      off();
    }
    void on() {
      digitalWrite(pin, HIGH);
    }
    void off() {
      digitalWrite(pin, LOW);
    }
};

Led led(lightPort);

void setup(){}

void loop()
{
  led.on();
  delay(1 * dTime);
  led.off();
  delay(1 * dTime);
}
