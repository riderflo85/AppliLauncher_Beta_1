 /*
    AppliLauncher:
 Version: 1.0
 Date de création: 04/07/2018
 Creer par: GRENAILLE Florent
 Licence: OpenSource/Libre
 Source: https://github.com/riderflo85/AppliLauncher_Beta_1
 
 */
 
 // Déclaration des variables
int pinBoutonOs = 22;
int pinBoutonProfil = 23;
int pinBoutonProg1 = 24;
int pinBoutonProg2 = 25;
int pinBoutonProg3 = 26;
int pinBoutonProg4 = 27;
int pinBoutonProg5 = 28;
int pinBoutonProg6 = 29;
int pinBoutonProg7 = 30;
int pinBoutonProg8 = 31;
int pinBoutonProg9 = 32;
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
int profilSelectionner = 1;
String osSelectionner = "Windows";
boolean verifOsLinux = false;
boolean verifOsWindows = true;
boolean testBouton = true;
boolean etatBouton1;
boolean etatBouton2;
boolean etatBouton3;
boolean etatBouton4;
boolean etatBouton5;
boolean etatBouton6;
boolean etatBouton7;
boolean etatBouton8;
boolean etatBouton9;
boolean etatBoutonOs;
boolean etatBoutonProfil;

// Function d'initialisation
void setup() {
  Serial.begin(115200); // A MODIFIER AVEC LA VALEUR DE L'ARDUINO MEGA 2560 REV3
  
  // Initialisation des pins bouton en INPUT_PULLUP
  for (int i = 22; i < 33; i++) {
    pinMode(i, INPUT_PULLUP);
  }
  // Initialisation des pins led boutonProg
  for (int t = 33; t < 51; t++) {
    pinMode(t, OUTPUT);
  }
  // Initialisation des pins led restant (led boutonOs et boutonProfil)
  for (int a = 3; a < 7; a++) {
    pinMode(a, OUTPUT);
  }
}

 void loop() {
  // Initialisation des variables pour détecter l'appuis sur les boutons poussoirs
  etatBouton1 = digitalRead(pinBoutonProg1);
  etatBouton2 = digitalRead(pinBoutonProg2);
  etatBouton3 = digitalRead(pinBoutonProg3);
  etatBouton4 = digitalRead(pinBoutonProg4);
  etatBouton5 = digitalRead(pinBoutonProg5);
  etatBouton6 = digitalRead(pinBoutonProg6);
  etatBouton7 = digitalRead(pinBoutonProg7);
  etatBouton8 = digitalRead(pinBoutonProg8);
  etatBouton9 = digitalRead(pinBoutonProg9);
  etatBoutonOs = digitalRead(pinBoutonOs);
  etatBoutonProfil = digitalRead(pinBoutonProfil);

  // Code à exécuter pour windows en fonction du profil
  if (osSelectionner == "Windows" or !etatBoutonOs and osSelectionner == "Windows") {
    if (verifOsWindows == true and verifOsLinux == false){
      Serial.println("wi");
      digitalWrite(pinLedRougeOsWin, HIGH);
      digitalWrite(pinLedJauneOsLin, LOW);
      verifOsWindows = false;
      verifOsLinux = true;
      osSelectionner = "Linux";
      delay(200);

      // Code à exécuter pour le profil_1 sous windows
      if (profilSelectionner == 1 or !etatBoutonProfil and profilSelectionner == 1) {
        Serial.println("p1");
        digitalWrite(pinLedBleuProfil1,HIGH);
        for (int c = 42; c < 51; c++){
          digitalWrite(c, HIGH);
        }
        profilSelectionner = 2;
        delay(200);

        // Code à exécuter en cas d'appuis sur les boutons poussoirs
        if (!etatBouton1) {
          Serial.println("b1");
        }
        if (!etatBouton2) {
          Serial.println("b2");
        }
        if (!etatBouton3) {
          Serial.println("b3");
        }
        if (!etatBouton4) {
          Serial.println("b4");
        }
        if (!etatBouton5) {
          Serial.println("b5");
        }
        if (!etatBouton6) {
          Serial.println("b6");
        }
        if (!etatBouton7) {
          Serial.println("b7");
        }
        if (!etatBouton8) {
          Serial.println("b8");
        }
        if (!etatBouton9) {
          Serial.println("b9");
        }
      }

      // Code à exécuter pour le profil_2 sous windows
      else if (!etatBoutonProfil and profilSelectionner == 2) {
        Serial.println("p2");
        digitalWrite(pinLedBleuProfil1, LOW);
        digitalWrite(pinLedVerteProfil2, HIGH);
        for (int c = 42; c < 51; ++c) {
          digitalWrite(c, LOW);
        }
        for (int i = 33; i < 42; ++i) {
          digitalWrite(i, HIGH);
        }
        profilSelectionner = 1;
        delay(200);

        // Code à exécuter en cas d'appuis sur les boutons poussoirs
        if (!etatBouton1) {
          Serial.println("b1");
        }
        if (!etatBouton2) {
          Serial.println("b2");
        }
        if (!etatBouton3) {
          Serial.println("b3");
        }
        if (!etatBouton4) {
          Serial.println("b4");
        }
        if (!etatBouton5) {
          Serial.println("b5");
        }
        if (!etatBouton6) {
          Serial.println("b6");
        }
        if (!etatBouton7) {
          Serial.println("b7");
        }
        if (!etatBouton8) {
          Serial.println("b8");
        }
        if (!etatBouton9) {
          Serial.println("b9");
        }
      }
    }
  }
  // Code à exécuter pour linux en fonction du profil
  else if (!etatBoutonOs and osSelectionner == "Linux") {
    if (verifOsWindows == false and verifOsLinux == true) {
      Serial.println("li");
      digitalWrite(pinLedRougeOsWin, LOW);
      digitalWrite(pinLedJauneOsLin, HIGH);
      verifOsLinux = false;
      verifOsWindows = true;
      osSelectionner = "Windows";
      delay(200);

      // Code à exécuter pour le profil_1 sous linux
      if (profilSelectionner == 1 or !etatBoutonProfil and profilSelectionner == 1) {
        Serial.println("p1");
        digitalWrite(pinLedBleuProfil1,HIGH);
        for (int c = 42; c < 51; c++){
          digitalWrite(c, HIGH);
        }
        profilSelectionner = 2;
        delay(200);

        // Code à exécuter en cas d'appuis sur les boutons poussoirs
        if (!etatBouton1) {
          Serial.println("b1");
        }
        if (!etatBouton2) {
          Serial.println("b2");
        }
        if (!etatBouton3) {
          Serial.println("b3");
        }
        if (!etatBouton4) {
          Serial.println("b4");
        }
        if (!etatBouton5) {
          Serial.println("b5");
        }
        if (!etatBouton6) {
          Serial.println("b6");
        }
        if (!etatBouton7) {
          Serial.println("b7");
        }
        if (!etatBouton8) {
          Serial.println("b8");
        }
        if (!etatBouton9) {
          Serial.println("b9");
        }
      }

      // Code à exécuter pour le profil_2 sous linux
      else if (!etatBoutonProfil and profilSelectionner == 2) {
        Serial.println("p2");
        digitalWrite(pinLedBleuProfil1, LOW);
        digitalWrite(pinLedVerteProfil2, HIGH);
        for (int c = 42; c < 51; ++c) {
          digitalWrite(c, LOW);
        }
        for (int i = 33; i < 42; ++i) {
          digitalWrite(i, HIGH);
        }
        profilSelectionner = 1;
        delay(200);

        // Code à exécuter en cas d'appuis sur les boutons poussoirs
        if (!etatBouton1) {
          Serial.println("b1");
        }
        if (!etatBouton2) {
          Serial.println("b2");
        }
        if (!etatBouton3) {
          Serial.println("b3");
        }
        if (!etatBouton4) {
          Serial.println("b4");
        }
        if (!etatBouton5) {
          Serial.println("b5");
        }
        if (!etatBouton6) {
          Serial.println("b6");
        }
        if (!etatBouton7) {
          Serial.println("b7");
        }
        if (!etatBouton8) {
          Serial.println("b8");
        }
        if (!etatBouton9) {
          Serial.println("b9");
        }
      }
    }
  }
  delay(200);
  Serial.flush();
}