/*
BUG POSSIBLES/A MODIFIER

-Dans la loop, les IF pourraient ne pas marcher: faire une nouvelle fonction qui les fait clignoter et revenir à la loop.
-else if statement (syntaxe incorrecte: elseif)
*/


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
  
  etatBouton2 = digitalRead(bouton2);
  etatBouton3 = digitalRead(bouton3);
  
  if (etatBouton2 == HIGH) {   
    digitalWrite(led, HIGH);  // Clignotement rapide
    delay(400);
    digitalWrite(led, LOW);
    delay(400);
  } 

  else if (etatBouton3 == HIGH) {
    digitalWrite(led, HIGH);  // Clignotement lent
    delay(800);
    digitalWrite(led, LOW);
    delay(800);
  }

  else {
    digitalWrite(ledPin, LOW); 
  }
}
