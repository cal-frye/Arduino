// Attempt to combine RGB LED principles and Ball Switch

// Each color LED refers to that color component of the RGB LED
const int redLED = 4;
const int greenLED = 9;
const int blueLED = 11;

// Button
int button = 6;

byte leds = 0;

void setup()
{ 
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(button, INPUT);
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
}

void loop()
{
  int digitalValue = digitalRead(2);

  if (digitalRead(button) == LOW)
  {
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
    else
    {
      if (digitalValue == HIGH)
      {
        digitalWrite(redLED, LOW);
        digitalWrite(greenLED, LOW);
        digitalWrite(blueLED, HIGH);
        }
        else
        {
          digitalWrite(redLED, LOW);
          digitalWrite(greenLED, HIGH);
          digitalWrite(blueLED, LOW);
          }
      }
  }
