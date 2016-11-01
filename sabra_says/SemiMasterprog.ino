
/*
Bug Possibles/Connus
- La led clignote toute seule (ce n'est pas parce-qu'il détecte le bouton comme étant appuyé: j'ai débranché le fil du bouton et la led continue à clignoter)
                               À Tester: Mettre un Serial.print(" "); en dessous de la détection bouton
*/
const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

const int bo1 = 2;
const int bo2 = 3;
const int bo3 = 4;
const int bo4 = 5;

int etatbo1;
int etatbo2;
int etatbo3;
int etatbo4;

int pans; //Player answer1
int cans1; //Correct answer1
int cans2;
int cans3;
int cans4;
int seq_1;
int seq_2;
int seq_3;



void setup() {
  
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  
  pinMode(bo1, INPUT);
  pinMode(bo2, INPUT);
  pinMode(bo3, INPUT);
  pinMode(bo4, INPUT);
  
}

void loop() {
  seq_1 = random(1, 5);
  seq_2 = random(1, 5);
  seq_3 = random(1, 5);
  seq1();
  seq1_check();
  seq1();
  seq2();
  seq2_1_check();
  seq2_2_check();
  seq1();
  seq2();
  seq3();
  seq3_1_check();
  seq3_2_check();
  seq3_3_check();
  
}

void seq1() {
  
  

  if (seq_1 == 1) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    cans1 = 1;
  }
  else if (seq_1 == 2) {
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(500);
    cans1 = 2;
  }
  else if (seq_1 == 3) {
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    delay(500);
    cans1 = 3;
  }
  else if (seq_1 == 4) {
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    delay(500);
    cans1 == 4;
  }
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  

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
  ans1();
 } 

 
 
void ans1() {

  if (pans == cans1) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    
  }
  
  else if (pans != cans1 && pans > 0) {
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

  if (seq_2 == 1) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    cans2 = 1;
  }
  else if (seq_2 == 2) {
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(500);
    cans2 = 2;
  }
  else if (seq_2 == 3) {
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    delay(500);
    cans2 = 3;
  }
  else if (seq_2 == 4) {
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    delay(500);
    cans2 == 4;
  }
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  
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
 ans2_1();
}
void ans2_1() {
  
  if (pans == cans1) {
    
  }
  
  else if (pans != cans1 && pans > 0) {
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
 ans2_2();
}

void ans2_2() {
  
  if (pans == cans2) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    
  }
  
  else if (pans != cans2 && pans > 0) {
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
  if (seq_3 == 1) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    cans3 = 1;
  }
  else if (seq_3 == 2) {
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(500);
    cans3 = 2;
  }
  else if (seq_3 == 3) {
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    delay(500);
    cans3 = 3;
  }
  else if (seq_3 == 4) {
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    delay(500);
    cans3 == 4;
  }
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
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
  ans3_1();
}
void ans3_1() {

  if (pans == cans1) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    
  }
  
  else if (pans != cans1 && pans > 0) {
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
  ans3_2();
}
