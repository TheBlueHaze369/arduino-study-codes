int inPort=13;

void setup() {
  Serial.begin(9600);
  pinMode(inPort, INPUT);

}

void loop() {
  bool val= digitalRead(inPort);

  Serial.println(val);
  delay(100);
}
