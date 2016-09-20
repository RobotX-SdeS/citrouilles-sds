/*
BUG POSSIBLES/A MODIFIER
-Dans la loop, les IF pourraient ne pas marcher: faire une nouvelle fonction qui les fait clignoter et revenir à la loop.
-else if statement (syntaxe incorrecte: elseif)
 /!\ Bien attribuer le bon port série dans l'onglets options
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
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
  } 

  if (etatBouton3 == HIGH) {
    digitalWrite(led, HIGH);  // Clignotement lent
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }

  else {
    digitalWrite(led, LOW); 
  }
}
