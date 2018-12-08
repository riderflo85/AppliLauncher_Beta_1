
// NE PAS TÉLÉVERSER AVEC VISUAL STUDIO CODE !!!!!!!!!
// UTILISER L'IDE ARDUINO DE BASE

int pinLedVerteBP1 = 33;
int pinLedVerteBP2 = 34;
int pinLedVerteBP3 = 35;
int pinLedVerteBP4 = 36;
int pinLedVerteBP5 = 37;
int pinLedVerteBP6 = 38;
int pinLedVerteBP7 = 39;
int pinLedVerteBP8 = 40;
int pinLedVerteBP9 = 41;
int pinLedBleuBP1 = 42;
int pinLedBleuBP2 = 43;
int pinLedBleuBP3 = 44;
int pinLedBleuBP4 = 45;
int pinLedBleuBP5 = 46;
int pinLedBleuBP6 = 47;
int pinLedBleuBP7 = 48;
int pinLedBleuBP8 = 49;
int pinLedBleuBP9 = 50;
int pinLedBleuProfil1 = 3;
int pinLedVerteProfil2 = 4;
int pinLedRougeOsWin = 5;
int pinLedJauneOsLin = 6;

void setup()
{
  for (int i = 33; i < 51; i++) {
    pinMode(i, OUTPUT);
  }

  for (int e = 3; e < 7; e++) {
    pinMode(e, OUTPUT);
  }
  
}
void loop()
{
  /*for (int a = 33; a < 51; a++) {
    digitalWrite(a, HIGH);
    delay(50);
  }

  for (int o = 3; o < 7; o++) {
    digitalWrite(o, HIGH);
    delay(50);
  }

  for (int a = 33; a < 51; a++) {
    digitalWrite(a, LOW);
    delay(50);
  }

  for (int o = 3; o < 7; o++) {
    digitalWrite(o, LOW);
    delay(50);
  }*/

  digitalWrite(42, HIGH); //BP1
  delay(100);
  digitalWrite(33, HIGH); 
  delay(100);
  digitalWrite(43, HIGH); //BP2
  delay(100);
  digitalWrite(34, HIGH);
  delay(100);
  digitalWrite(44, HIGH); //BP3
  delay(100);
  digitalWrite(35, HIGH);
  delay(100);
  digitalWrite(38, HIGH); //BP6
  delay(100);
  digitalWrite(47, HIGH);
  delay(100);
  digitalWrite(37, HIGH); //BP5
  delay(100);
  digitalWrite(46, HIGH);
  delay(100);
  digitalWrite(36, HIGH); //BP4
  delay(100);
  digitalWrite(45, HIGH);
  delay(100);
  digitalWrite(48, HIGH); //BP7
  delay(100);
  digitalWrite(39, HIGH);
  delay(100);
  digitalWrite(49, HIGH); //BP8
  delay(100);
  digitalWrite(40, HIGH);
  delay(100);
  digitalWrite(50, HIGH); //BP9
  delay(100);
  digitalWrite(41, HIGH);
  delay(100);
  digitalWrite(3, HIGH); //BP Profil
  delay(100);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(6, HIGH); //BP OS
  delay(100);
  digitalWrite(5, HIGH);
  delay(100);

  digitalWrite(42, LOW);
  delay(100);
  digitalWrite(33, LOW);
  delay(100);
  digitalWrite(43, LOW);
  delay(100);
  digitalWrite(34, LOW);
  delay(100);
  digitalWrite(44, LOW);
  delay(100);
  digitalWrite(35, LOW);
  delay(100);
  digitalWrite(38, LOW);
  delay(100);
  digitalWrite(47, LOW);
  delay(100);
  digitalWrite(37, LOW);
  delay(100);
  digitalWrite(46, LOW);
  delay(100);
  digitalWrite(36, LOW);
  delay(100);
  digitalWrite(45, LOW);
  delay(100);
  digitalWrite(48, LOW);
  delay(100);
  digitalWrite(39, LOW);
  delay(100);
  digitalWrite(49, LOW);
  delay(100);
  digitalWrite(40, LOW);
  delay(100);
  digitalWrite(50, LOW);
  delay(100);
  digitalWrite(41, LOW);
  delay(100);
  digitalWrite(3, LOW);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);
  digitalWrite(6, LOW);
  delay(100);
  digitalWrite(5, LOW);
  
}