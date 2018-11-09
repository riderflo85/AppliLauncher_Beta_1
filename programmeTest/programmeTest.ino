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

 int pinBouton = 2, pinLedRouge = 5, pinLedVerte = 4;
 bool testBouton = true;
 
void setup() {
  Serial.begin(9600);
  pinMode(pinLedRouge, OUTPUT);
  pinMode(pinLedVerte, OUTPUT);
  pinMode(pinBouton, INPUT_PULLUP);
  
}
 void loop() {
  //Serial.println(testBouton);
  //Serial.println("l");
  //delay(2000);
  if (testBouton) {
    digitalWrite(pinLedRouge, HIGH);
    digitalWrite(pinLedVerte, LOW);
  }
  else {
    digitalWrite(pinLedRouge, LOW);
    digitalWrite(pinLedVerte, HIGH);
  }
  bool etatBouton = digitalRead(pinBouton);
  //Serial.println(etatBouton);
  if (!etatBouton) {
    digitalWrite(pinLedRouge, LOW);
    digitalWrite(pinLedVerte, HIGH);
    Serial.println("1");
  }
  delay(200);
  Serial.flush();
}
