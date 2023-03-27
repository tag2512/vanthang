#define LED_PIN 2
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32-S2!");
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // turn on LED
  Serial.println("ON");
  delay(1000); // wait for 1 second
  digitalWrite(LED_PIN, LOW); // turn off LED
  Serial.println("OFF");
  delay(1000); // wait for 1 second
}
