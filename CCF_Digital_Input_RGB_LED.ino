// Attempt to combine digital input principles and RGB LED
// Each color LED refers to that color component of the RGB LED
int redLED = 5;
int greenLED = 10;
int blueLED = 11;

// Buttons: A is red, B is green, C is blue, and D of off
int buttonA = 9;
int buttonB = 8;
int buttonC = 4;
int buttonD = 2;

byte leds = 0;

void setup() 
{
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  pinMode(buttonC, INPUT_PULLUP);
  pinMode(buttonD, INPUT_PULLUP);
}

void loop() 
{
  if (digitalRead(buttonA) == LOW)
  {
    digitalWrite(redLED, HIGH);
  }
  if (digitalRead(buttonB) == LOW)
  {
    digitalWrite(greenLED, HIGH);
  }
  if (digitalRead(buttonC) == LOW)
  {
    digitalWrite(blueLED, HIGH);
    }
  if (digitalRead(buttonD) == LOW)
  {
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(blueLED, LOW);
    }
}
