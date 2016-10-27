/*
Bug Possibles/Connus
- La led clignote toute seule (ce n'est pas parce-qu'il détecte le bouton comme étant appuyé: j'ai débranché le fil du bouton et la led continue à clignoter)
                               À Tester: Mettre un Serial.print(" "); en dessous de la détection bouton

*/
const int led1 = 13;
const int led2 = 12;

const int bo1 = 2;
const int bo2 = 3;

int etatbo1 = 0;
int etatbo2 = 0;

int pans = 0; //Player answer
int cans = 1; //Correct answer



void setup() {
  
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  
  pinMode(bo1, INPUT);
  pinMode(bo2, INPUT);
  
  seq1();
}

void loop() {
  etatbo1 = digitalRead(bo1);
  etatbo2 = digitalRead(bo2);
  
}



void seq1() {
  
  
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  
  seq1_check();
}



void seq1_check() {

 while (etatbo1 == LOW && etatbo2 == LOW) {
  
   
  if (etatbo1 == HIGH) {
    //Serial.print("bo1 enfonce");
    pans = 1;
  }
  else if (etatbo2 == HIGH) {
    //Serial.print("bo2 enfonce")
    pans = 2;
  }
  else {
    //Serial.print("relache");
    pans = 1;
  }
   
  ans();
 } 
}
 
 
void ans() {
  cans = 1;

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
  }
  
 }
 
 
