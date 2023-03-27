void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32-S2!");
  pinMode(LED_BUILTIN , OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // turn on LED
  Serial.println("LED ON");
  delay(1000); // wait for 1 second
  digitalWrite(LED_BUILTIN, LOW); // turn off LED
  Serial.println("LED OFF");
  delay(1000); // wait for 1 second
}
