/*Définition de variables
 * boutonVerifOs
 * boutonProg1
 * boutonProg2
 * boutonProg3
 * boutonProg4
 * boutonProg5
 * boutonProg6
 * boutonProg7
 * boutonProg8
 * boutonProg9
 */

void setup() {
  Serial.begin(9600);
  
}
 void loop() {
  //int valeurCapteur = analogRead(capteur);
  //float temperature = valeurCapteur * (5.0 / 1023.0 * 100.0);
  //Serial.println(temperature);
  //Serial.println(" C ");
  Serial.println("L");
  delay(3000);
  Serial.flush();
}

