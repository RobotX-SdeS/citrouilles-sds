const int bouton2 = 2;
const int bouton3 = 3;
const int led =  13;

int etatBouton2 = 0;
int etatBouton3 = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(bouton2, INPUT);
  pinMode(bouton3, INPUT);
}

void loop(){
  
  etatBouton = digitalRead(bouton2); // Rendus ici
  
  if (buttonState == HIGH) {     
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    digitalWrite(ledPin, LOW); 
  }
}
