// Define color-association of pins
#define BLUE 3
#define GREEN 5
#define RED 6

// Define variables for later use
int redValue;
int greenValue;
int blueValue;
int delayTime;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

void loop() {
// manipulating time for(int i = 5; i < 100; i +=1){ delayTime += 5;}

// decrease red and increase green
for(int i = 0; i < 255; i += 1){
  redValue -= 1;
  greenValue += 1;
  analogWrite(RED, redValue);
  analogWrite(GREEN, greenValue);
  delay(10);
}

// decrease green and increase blue
for(int i = 0; i < 255; i += 1){
  greenValue -= 1;
  blueValue += 1;
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue);
  delay(10);
}

// decrease blue and return to red
for(int i = 0; i < 255; i += 1){
  blueValue -= 1;
  redValue += 1;
  analogWrite(BLUE, blueValue);
  analogWrite(RED, redValue);
  delay(10);
}
}
