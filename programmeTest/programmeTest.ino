int capteur = 0;
void setup() {
  Serial.begin(9600);
}
 void loop() {
  int valeurCapteur = analogRead(capteur);
  float temperature = valeurCapteur * (5.0 / 1023.0 * 100.0);
  Serial.println(temperature);
  //Serial.println(" C ");
  //Serial.print("Linux");
  delay(3000);
  Serial.flush();
}

