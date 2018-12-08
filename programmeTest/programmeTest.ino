
// NE PAS TÉLÉVERSER AVEC VISUAL STUDIO CODE !!!!!!!!!
// UTILISER L'IDE ARDUINO DE BASE


int pinLed1 = 24;
int pinLed2 = 25;
int pinLed3 = 26;
int pinLed4 = 27;
int pinLed5 = 28;
int pinLed6 = 29;
int pinLed7 = 30;
int pinLed8 = 31;
int pinLed9 = 32;

void setup() {
  for (int i = 24; i < 33; i++) {
    pinMode(i, OUTPUT);
  }
  
}
 void loop() {
  for (int e = 24; e < 33; e++) {
    digitalWrite(e, HIGH);
    delay(1500);
    digitalWrite(e, LOW);
    delay(1500);
  }
}
