/*
Bug Possibles/Connus
- La led clignote toute seule (ce n'est pas parce-qu'il détecte le bouton comme étant appuyé: j'ai débranché le fil du bouton et la led continue à clignoter)
                               À Tester: Mettre un Serial.print(" "); en dessous de la détection bouton
*/
const int led1 = 13;//initialiser led1 dans le port 13
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

const int bo1 = 2;//initialiser bo1 dans le port 2
const int bo2 = 3;
const int bo3 = 4;
const int bo4 = 5;

int etatbo1;
int etatbo2;
int etatbo3;
int etatbo4;

int pans; //Player answer// comme ce ne sont pas des constantes, pas besoin de mettre un valeur précise au début
int cans; //Correct answer



void setup() {
  
  pinMode(led1, OUTPUT);//initialiser led1 comme OUTPUT
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  
  pinMode(bo1, INPUT);//initialiser bo1 comme INPUT
  pinMode(bo2, INPUT);
  pinMode(bo3, INPUT);
  pinMode(bo4, INPUT);
  
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
  etatbo3 = digitalRead(bo3);
  etatbo4 = digitalRead(bo4);

  if (etatbo1 == HIGH) {
    Serial.print("bo1 enfonce");
    pans = 1;
  }
  else if (etatbo2 == HIGH) {
    Serial.print("bo2 enfonce");
    pans = 2;
  }
  else if (etatbo3 == HIGH) {
   pans = 3; 
  }
  else if (etatbo4 == HIGH) {
    pans = 4;
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
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    seq2();
    
    
  }
  
  else if (pans != cans && pans > 0) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    delay(1000);
    loop();
    
  }
  
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    seq1_check();
  }
  
 }

void seq2() {
  
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  seq2_1_check();
  
}

void seq2_1_check() {
  
  etatbo1 = digitalRead(bo1);
  etatbo2 = digitalRead(bo2);
  etatbo3 = digitalRead(bo3);
  etatbo4 = digitalRead(bo4);

  if (etatbo1 == HIGH) {
    Serial.print("bo1 enfonce");
    pans = 1;
  }
  else if (etatbo2 == HIGH) {
    Serial.print("bo2 enfonce");
    pans = 2;
  }
  else if (etatbo3 == HIGH) {
   pans = 3; 
  }
  else if (etatbo4 == HIGH) {
    pans = 4;
  }
  else {
    Serial.print("relache");
    pans = 0;
  }
   cans = 1;
  ans2_1();
  
}

void ans2_1() {
  
  if (pans == cans) {
   
    seq2_2_check();
    
    
  }
  
  else if (pans != cans && pans > 0) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    delay(1000);
    loop();
    
  }
  
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    seq2_1_check();
  }
  
}

void seq2_2_check() {
  
  etatbo1 = digitalRead(bo1);
  etatbo2 = digitalRead(bo2);
  etatbo3 = digitalRead(bo3);
  etatbo4 = digitalRead(bo4);

  if (etatbo1 == HIGH) {
    Serial.print("bo1 enfonce");
    pans = 1;
  }
  else if (etatbo2 == HIGH) {
    Serial.print("bo2 enfonce");
    pans = 2;
  }
  else if (etatbo3 == HIGH) {
   pans = 3; 
  }
  else if (etatbo4 == HIGH) {
    pans = 4;
  }
  else {
    Serial.print("relache");
    pans = 0;
  }
   cans = 2;
  ans2_2();
  
}

void ans2_2() {
  
  if (pans == cans) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    loop();
    
    
  }
  
  else if (pans != cans && pans > 0) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    delay(1000);
    loop();
    
  }
  
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    seq2_2_check();
  }
  
  
}

void seq3() {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led4, LOW);
  delay(500);
  
  seq3_1_check();
}
void seq3_1_check() {
  etatbo1 = digitalRead(bo1);
  etatbo2 = digitalRead(bo2);
  etatbo3 = digitalRead(bo3);
  etatbo4 = digitalRead(bo4);

  if (etatbo1 == HIGH) {
    Serial.print("bo1 enfonce");
    pans = 1;
  }
  else if (etatbo2 == HIGH) {
    Serial.print("bo2 enfonce");
    pans = 2;
  }
  else if (etatbo3 == HIGH) {
   pans = 3; 
  }
  else if (etatbo4 == HIGH) {
    pans = 4;
  }
  else {
    Serial.print("relache");
    pans = 0;
  }
   cans = 1;
  ans3_1();
}
void ans3_1() {
  if (pans == cans) {
   
    seq3_2_check();
    
    
  }
  
  else if (pans != cans && pans > 0) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    delay(1000);
    loop();
    
  }
  
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    seq3_1_check();
  }
}
void seq3_2_check() {
  etatbo1 = digitalRead(bo1);
  etatbo2 = digitalRead(bo2);
  etatbo3 = digitalRead(bo3);
  etatbo4 = digitalRead(bo4);

  if (etatbo1 == HIGH) {
    Serial.print("bo1 enfonce");
    pans = 1;
  }
  else if (etatbo2 == HIGH) {
    Serial.print("bo2 enfonce");
    pans = 2;
  }
  else if (etatbo3 == HIGH) {
   pans = 3; 
  }
  else if (etatbo4 == HIGH) {
    pans = 4;
  }
  else {
    Serial.print("relache");
    pans = 0;
  }
   cans = 2;
  ans3_2();
}

void ans3_2() {


  if (pans == cans) {
   
    seq3_3_check();
    
    
  }
  
  else if (pans != cans && pans > 0) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    delay(1000);
    loop();
    
  }
  
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    seq3_2_check();
  }
}
void seq3_3_check() {
  etatbo1 = digitalRead(bo1);
  etatbo2 = digitalRead(bo2);
  etatbo3 = digitalRead(bo3);
  etatbo4 = digitalRead(bo4);

  if (etatbo1 == HIGH) {
    Serial.print("bo1 enfonce");
    pans = 1;
  }
  else if (etatbo2 == HIGH) {
    Serial.print("bo2 enfonce");
    pans = 2;
  }
  else if (etatbo3 == HIGH) {
   pans = 3; 
  }
  else if (etatbo4 == HIGH) {
    pans = 4;
  }
  else {
    Serial.print("relache");
    pans = 0;
  }
   cans = 4;
  ans3_3();
}
void
