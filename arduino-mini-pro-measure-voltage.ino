const int analogPin = A1;
const int analogPin2 = A2;
const int ledPin = A0;

bool ledOn = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float voltage = analogRead(analogPin) * (3.3 / 1023.0);
  float voltage2 = analogRead(analogPin2) * (3.3 / 1023.0);

  Serial.print("A1 Voltage: ");
  Serial.println(voltage);
  Serial.print("A2 Voltage: ");
  Serial.println(voltage2);  

  if (voltage >= 1 && voltage2 > 1) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  } else {
    digitalWrite(ledPin, LOW);  // ensure LED is off
    delay(500);
  }
}