/*
Bug Possibles/Connus
- La led clignote toute seule (ce n'est pas parce-qu'il détecte le bouton comme étant appuyé: j'ai débranché le fil du bouton et la led continue à clignoter)
                               À Tester: Mettre un Serial.print(" "); en dessous de la détection bouton
*/
const int led1 = 13;//initialiser led1 dans le port 13
const int led2 = 12;

const int bo1 = 2;//initialiser bo1 dans le port 2
const int bo2 = 3;

int etatbo1 = 0;
int etatbo2 = 0;

int pans; //Player answer// comme ce ne sont pas des constantes, pas besoin de mettre un valeur précise au début
int cans; //Correct answer



void setup() {
  
  pinMode(led1, OUTPUT);//initialiser led1 comme OUTPUT
  pinMode(led2, OUTPUT);
  
  pinMode(bo1, INPUT);//initialiser bo1 comme INPUT
  pinMode(bo2, INPUT);
  
}

void loop() {//début loop
  seq1();//débuter void seq1
}//fin loop

void seq1() {
  
  
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  
  seq1_check();
}



void seq1_check() {

etatbo1 = digitalRead(bo1);
etatbo2 = digitalRead(bo2);

if (etatbo1 == HIGH) {
    Serial.print("bo1 enfonce");
    pans = 1;
  }
  else if (etatbo2 == HIGH) {
    Serial.print("bo2 enfonce");
    pans = 2;
  }
  else {
    Serial.print("relache");
    pans = 0;
  }
   cans = 1;
  ans();
 } 

 
 
void ans() {

  if (pans == cans) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    
  }
  
  else if (pans > cans) {
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(500);
    
  }
  
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    seq1_check();
  }
  
 }
