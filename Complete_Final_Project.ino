/*
  Blinking LEDs - test program to run 3 LEDs in a pattern of blinks
*/

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int potPin = A0;
int buttonPin = 7;
int buzzerPin = 8;
int buttonState = 0;
float val = 0;
int t = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(115200);
  pinMode(led1, OUTPUT);  // Red 
  pinMode(led2, OUTPUT);  // Orange
  pinMode(led3, OUTPUT);  // Yellow  
  pinMode(led4, OUTPUT);  // Green
  pinMode(led5, OUTPUT);  // Blue
  pinMode(buttonPin, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  val = analogRead(potPin);
  t = (val + 1) * 2;
  Serial.print("Value: ");
  Serial.print(t,1);
  //Serial.print(val,0);    
  Serial.println(""); 
  // Flash light Red
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(t/2);                      // wait for 1/2 a second
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton value:
  if (buttonState == HIGH) {     // check if the pushbutton is pressed. If it is, the buttonState is HIGH
    tone(buzzerPin, 100, 500);  // Incorrect Buzzer
    // Flash light Red
    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led1, LOW);
    delay(200);
    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led1, LOW);
  }
  delay(t/2);                      // wait for 1/2 a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  // Flash light Orange
  digitalWrite(led2, HIGH);    // turn the LED on (HIGH is the voltage level)
  delay(t/2);                      // wait for 1/2 a second
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton value:
  if (buttonState == HIGH) {     // check if the pushbutton is pressed. If it is, the buttonState is HIGH
    tone(buzzerPin, 100, 500);  // Incorrect Buzzer
    // Flash light Orange
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led2, LOW);
    delay(200);
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led2, LOW);
  }
  delay(t/2);                      // wait for 1/2 a second
  digitalWrite(led2, LOW);     // turn the LED off by making the voltage LOW
  // Flash light Yellow
  digitalWrite(led3, HIGH);     // turn the LED on (HIGH is the voltage level)
  delay(t/2);                      // wait for 1/2 a second
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton value:
  if (buttonState == HIGH) {     // check if the pushbutton is pressed. If it is, the buttonState is HIGH
    tone(buzzerPin, 100, 500);  // Incorrect Buzzer
    // Flash Light Yellow
    digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led3, LOW);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led3, LOW);
  }
  delay(t/2);                      // wait for 1/2 a second
  digitalWrite(led3, LOW);      // turn the LED off by making the voltage LOW
  // Flash light Green
  digitalWrite(led4, HIGH);     // turn the LED on (HIGH is the voltage level)
  delay(t/2);                      // wait for 1/2 a second
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton value:
  if (buttonState == HIGH) {     // check if the pushbutton is pressed. If it is, the buttonState is HIGH
    tone(buzzerPin, 100, 500);  // Incorrect Buzzer
    // Flash Light Green
    digitalWrite(led4, HIGH);
    delay(200);
    digitalWrite(led4, LOW);
    delay(200);
    digitalWrite(led4, HIGH);
    delay(200);
    digitalWrite(led4, LOW);
  }
  delay(t/2);                      // wait for 1/2 a second
  digitalWrite(led4, LOW);      // turn the LED off by making the voltage LOW
  // Flash light Blue
  digitalWrite(led5, HIGH);     // turn the LED on (HIGH is the voltage level) 
  delay(t/2);
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton value:
  if (buttonState == HIGH) {     // check if the pushbutton is pressed. If it is, the buttonState is HIGH
    tone(buzzerPin, 1000, 500);  // Correct Buzzer
    // Flash all the lights together
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);     
    delay(200);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    delay(200);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    delay(200);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  }
  delay(t/2);
  digitalWrite(led5, LOW);      // turn the LED off by making the voltage LOW
}
