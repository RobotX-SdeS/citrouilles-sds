
const int boutton1 = 2;// le numéro de la pin de boutton1
const int boutton2 = 3;
const int boutton3 = 4;// le numéro de la pin de boutton2
const int boutton4 = 5;
const int rouge =  13;// le numéro de la pin de 
const int bleu = 12;
const int jaune = 10;
const int vert = 9;




// les variables vont changer:
int etatboutton1 = 0;// variable pour lire le statut de boutton1
int etatboutton2 = 0;
int etatboutton3 = 0;
int etatboutton4 = 0;// variable pour lire le statut de boutton2

void setup() {
  // initialiser les del comme OUTPUT(sort de l'info):
  pinMode(rouge, OUTPUT);
  pinMode(bleu, OUTPUT);
  pinMode(jaune, OUTPUT);
  pinMode(vert, OUTPUT);
  // initialiser les bouttons comme INPUT(sort et rentre de l'info):
  pinMode(boutton1, INPUT);
  pinMode(boutton2, INPUT);
  pinMode(boutton3, INPUT);
  pinMode(boutton4, INPUT);

  
}

void loop() {
  // lire la valeur de l'état des bouttons:
  etatboutton1 = digitalRead(boutton1);
  etatboutton2 = digitalRead(boutton2);
  etatboutton3 = digitalRead(boutton3);
  etatboutton4 = digitalRead(boutton4);

  digitalWrite(rouge, HIGH);//allumer la del1
  delay(1000);//attendre 1 seconde
  digitalWrite(rouge, LOW);//éteindre la dell1
  delay(1000);//attendre 1 seconde

  if (etatboutton1 == HIGH && etatboutton2 == LOW) {//si la valeur de l'état du boutton1 est HIGH(si on appuie dessus) et que la valeur de l'état du boutton 2 est LOW(si on appuie pas dessus)
    digitalWrite(rouge, HIGH);//allumer la del1
    delay(500);// attendre 0,5 seconde
    digitalWrite(rouge, LOW);//éteindre la del1
    delay(1000);//attendre 1 seconde
    digitalWrite(rouge, HIGH);//allumer la delvert
    digitalWrite(bleu, HIGH);
    digitalWrite(jaune, HIGH);
    digitalWrite(vert, HIGH);
    delay(500);//attendre 0,5 secondes
    digitalWrite(rouge, LOW);
    digitalWrite(bleu, LOW);
    digitalWrite(jaune, LOW);
    digitalWrite(vert, LOW);
    delay(500);
    digitalWrite(rouge, HIGH);//allumer la delvert
    digitalWrite(bleu, HIGH);
    digitalWrite(jaune, HIGH);
    digitalWrite(vert, HIGH);
    delay(500);//attendre 0,5 secondes
    digitalWrite(rouge, LOW);
    digitalWrite(bleu, LOW);
    digitalWrite(jaune, LOW);
    digitalWrite(vert, LOW);
    delay(500);
    digitalWrite(rouge, HIGH);//allumer la delvert
    digitalWrite(bleu, HIGH);
    digitalWrite(jaune, HIGH);
    digitalWrite(vert, HIGH);
    delay(500);//attendre 0,5 secondes
    digitalWrite(rouge, LOW);
    digitalWrite(bleu, LOW);
    digitalWrite(jaune, LOW);
    digitalWrite(vert, LOW);//éteindre la delvert
    delay(1000);//attendre 1 seconde
  }
  else if (etatboutton2 == HIGH && etatboutton1 == LOW) {//Sinon si la valeur de l'état du boutton2 est HIGH(si on appuie dessus) et que la valeur de l'état du boutton 1 est LOW(si on appuie pas dessus)
    digitalWrite(bleu, HIGH);//allumer la del2
    delay(500);//attendre 0,5 secondes
    digitalWrite(bleu, LOW);//éteindre la del2
    delay(1000);//attendre 1 seconde
    digitalWrite(rouge, HIGH);//allumer la delrouge
    delay(500);//attendre 0,5 secondes
    digitalWrite(rouge, LOW);
    digitalWrite(bleu, HIGH);
    delay(500);
    digitalWrite(bleu, LOW);
    digitalWrite(jaune, HIGH);
    delay(500);
    digitalWrite(jaune, LOW);
    digitalWrite(vert, HIGH);
    delay(500);
    digitalWrite(vert, LOW);//éteindre la delrouge
    delay(500);
    digitalWrite(rouge, HIGH);
    digitalWrite(bleu, HIGH);
    digitalWrite(jaune, HIGH);
    digitalWrite(vert, HIGH);
    delay(500);
    digitalWrite(rouge, LOW);
    digitalWrite(bleu, LOW);
    digitalWrite(jaune, LOW);
    digitalWrite(vert, LOW);
    delay(1000);//attendre 1 seconde
    return;
  }
  else//sinon
     digitalWrite(rouge, LOW);//éteindre la del1
     digitalWrite(bleu, LOW);//éteindre la del2
     digitalWrite(jaune, LOW);//éteindre la delvert
     digitalWrite(vert, LOW);//éteindre la delrouge
   }
