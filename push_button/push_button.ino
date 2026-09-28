int led_pin = 13;
int switch_pin = 12;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(switch_pin, INPUT);

}

void loop() {
  bool val=digitalRead(switch_pin);

  if (val==HIGH) {
    digitalWrite(led_pin, HIGH);

  }
  else{
    digitalWrite(led_pin, LOW);
  }
}
