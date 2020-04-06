// Attempt to combine RGB LED principles and Ball Switch

// Each color LED refers to that color component of the RGB LED
const int redLED = 5;
const int greenLED = 10;
const int blueLED = 11;

void setup()
{ 
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
}

void loop() 
{
  int digitalValue = digitalRead(2);
  if (digitalValue == HIGH)
    {
      digitalWrite(redLED, LOW);
      digitalWrite(greenLED, HIGH);
      digitalWrite(blueLED, LOW);
      }
      else
      {
        digitalWrite(redLED, HIGH);
        digitalWrite(greenLED, LOW);
        digitalWrite(blueLED, LOW);
        }
}
