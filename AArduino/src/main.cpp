#include <Arduino.h>

// put function declarations here:
int Led1 = 3;
int Led2 = 5;
int Led3 = 6;
int Led4 = 9;
int Led5 = 10;
int Led6 = 11;

int Pot1 = A0;
int Pot2 = A1;
int Pot3 = A2;

void setup() {
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);

  pinMode(Pot1, INPUT);
  pinMode(Pot2, INPUT);
  pinMode(Pot3, INPUT);
}

void loop () {
 int valorPot1 = analogRead(Pot1);
 if (valorPot1 < 512) {
    digitalWrite(Led1, HIGH); // LED 1 ligado
    digitalWrite(Led2, LOW);  // LED 2 desligado
  } 
 else {
    digitalWrite(Led1, LOW);  // LED 1 desligado
    digitalWrite(Led2, HIGH); // LED 2 ligado
 }
 int valorPot2 = analogRead(Pot2);
 if (valorPot2 < 512) {
    digitalWrite(Led3, HIGH); // LED 1 ligado
    digitalWrite(Led4, LOW);  // LED 2 desligado
  }
 else {
    digitalWrite(Led3, LOW);  // LED 1 desligado
    digitalWrite(Led4, HIGH); // LED 2 ligado
 }
 int valorPot3 = analogRead(Pot3);
 if (valorPot3 < 512) {
    digitalWrite(Led5, HIGH); // LED 1 ligado
    digitalWrite(Led6, LOW);  // LED 2 desligado
  }
 else {
    digitalWrite(Led5, LOW);  // LED 1 desligado
    digitalWrite(Led6, HIGH); // LED 2 ligado
}
};