// Mini-keyboard

#include "pitches.h"

int buttonA = 3;
int buttonB = 5;
int buttonC = 7;
int buttonD = 8;
int buttonE = 10;

int buzzer = 11;
 
void setup()
{
  pinMode(buttonA, INPUT);
  pinMode(buttonB, INPUT);
  pinMode(buttonC, INPUT);
  pinMode(buttonD, INPUT);
  pinMode(buttonE, INPUT);
  
  pinMode(buzzer, OUTPUT);
}
 
void loop() {  
  while(digitalRead(buttonA) == HIGH) {
    tone(buzzer, NOTE_C5);
  } 
  
  while(digitalRead(buttonB) == HIGH) {
    tone(buzzer, NOTE_D5);
  } 

  while(digitalRead(buttonC) == HIGH) {
    tone(buzzer, NOTE_E5);
  } 

  while(digitalRead(buttonD) == HIGH) {
    tone(buzzer, NOTE_F5);
  }

  while(digitalRead(buttonE) == HIGH) {
    tone(buzzer, NOTE_G5);
  } 

  noTone(buzzer);
}
