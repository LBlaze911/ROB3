#include "Lettreclass.h"   ///Importation des fichiers
#include "CodeMorse.cpp"


void tiret() {   ///Fonction permettant de communiquer un tiret avec Arduino
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void point() {   ///Fonction permettant de communiquer un point avec Arduino
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void clignotement(String x) {   ///Fonction permettant de communiquer un tiret ou un point selon le mot demandé avec Arduino
  for (int i = 0; i < x.length(); i++) {
    if (x.charAt(i) == '.') {
      point();
    } else if (x.charAt(i) == '-') {
      tiret();
    }
  }
}

void setup() {   ///Téléversement du code pour le clignotement sur la Arduino

  Serial.begin(9600);
  Serial.println("Mot?")
  Serial.print(morse[conteur])
  pinMode(LED_BUILTIN, OUTPUT);
  clignotement(morse[conteur]);
}

void loop() {

}