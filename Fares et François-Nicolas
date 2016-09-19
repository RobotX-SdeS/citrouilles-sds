/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 2. 
 
 
 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.
 
 
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonOne = 2;
const int buttonTwo = 3;// the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonStateOne = 0;
int buttonStateTwo = 0;// variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonOne, INPUT); 
  pinMode(buttonTwo, INPUT);  
}

void loop(){
  // read the state of the pushbutton value:
  buttonStateOne = digitalRead(buttonOne);
  buttonStateTwo = digitalRead(buttonTwo);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonStateOne == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);   
  } 
  else if (buttonStateTwo == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(ledPin, LOW);
    delay(250);
  }
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
}
