// Version finale (programme qui sera sur le Arduino)

/* Bugs possibles:
- Utilisation incorrecte de la commande RANDOM()
- Appel incorrect de fonctions
- Utilisation incorrecte de WHILE (l'objectif est que le pogramme attende que le bouton soit presse avant de passer a la suite)
*/

// Declaration variables RANDOM sous la forme (numero de séquence)_(led a allumer)
int s1_1 = random(1,4);
int s2_1 = random(1,4);
int s2_2 = random(1,4);
int s3_1 = random(1,4);
int s3_2 = random(1,4);
int s3_3 = random(1,4);

// Declaration constantes de BOUTONS
const int bo1 = 2;     
const int bo2 = 3;
const int bo3 = 4;
const int bo4 = 5;

// Declaration variables ETAT BOUTON
int etatbo1 = 0;
int etatbo2 = 0;
int etatbo3 = 0;
int etatbo4 = 0;

// Declaration constantes de LEDs
const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

// TODO: Declarer le(s) son(s)

/*
const int son1 = 9;
const int son2 = 8;
const int son3 = 7;
const int son4 = 6;
*/


// Fonction SETUP
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

// Fontion LOOP
void loop(){
  etatbo1 = digitalRead(bo1);
  etatbo2 = digitalRead(bo2);
  etatbo3 = digitalRead(bo3);
  etatbo4 = digitalRead(bo4);
}
    

  // Schema theorique des commandes pour une sequence
  
// Fonction SEQUENCE 1
void seq1(){

  if (s1_1 == 1) {
   digitalWrite(led1, HIGH);
   //Jouer son1
   delay(500);
   digitalWrite(led1, LOW);
   //Arreter son1

   while (etatbo1 == LOW){
    
      if (etatbo1 == HIGH){
        delay(500);
        digitalWrite(led1, HIGH);
        //Jouer son1
        delay(500);
        digitalWrite(led1, LOW);
        //Arreter son1
        
      else(){
        digitalWrite(led1, LOW);
          seq2_1();
       }
      }
    }
    
  }

  else if (s1_1 == 2) {
   digitalWrite(led2, HIGH);
   //Jouer son2
   delay(500);
   digitalWrite(led2, LOW);
   //Arreter son2

   while (etatbo2 == LOW){
    
      if (etatbo2 == HIGH){
        delay(500);
        digitalWrite(led2, HIGH);
        //Jouer son2
        delay(500);
        digitalWrite(led2, LOW);
        //Arreter son2
        
      else(){
        digitalWrite(led2, LOW);
          seq2_1();
       }
      }
    }
    
  }

  else if (s1_1 == 3) {
   digitalWrite(led3, HIGH);
   //Jouer son3
   delay(500);
   digitalWrite(led3, LOW);
   //Arreter son3

   while (etatbo3 == LOW){
    
      if (etatbo3 == HIGH){
        delay(500);
        digitalWrite(led3, HIGH);
        //Jouer son3
        delay(500);
        digitalWrite(led3, LOW);
        //Arreter son3
        
      else(){
        digitalWrite(led3, LOW);
          seq2_1();
       }
      }
    }
      
  }

  else if (s1_1 == 4) {
   digitalWrite(led4, HIGH);
   //Jouer son4
   delay(500);
   digitalWrite(led4, LOW);
   //Arreter son4

   while (etatbo4 == LOW){
    
      if (etatbo4 == HIGH){
        delay(500);
        digitalWrite(led4, HIGH);
        //Jouer son4
        delay(500);
        digitalWrite(led4, LOW);
        //Arreter son4
        
      else(){
        digitalWrite(led4, LOW);
          seq2_1();
       }
      }
    }

  }
    
} //Fin de la fonction seq1





//Fonction seq2

void seq2_1(){

	if (s2_1 == 1) {

	  digitalWrite(led1, HIGH);
	  delay(1000);
	  digitalWrite(led1, LOW);
	  delay(1000);
    
    while (etatbo1 == LOW) {
      
      if (etatbo1 == HIGH) {
        digitalWrite (led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led1, LOW);
        seq2_2();
      }
    }
  }

	else if (s2_1 == 2) {

	  digitalWrite(led2, HIGH);
	  delay(1000);
	  digitalWrite(led2, LOW);
	  delay(1000);

      while (etatbo2 == LOW) {
      
      if (etatbo2 == HIGH) {
        digitalWrite (led2, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led2, LOW);
        seq2_2();
       }
    }
  }

	else if (s2_1 == 3) {

	  digitalWrite(led3, HIGH);
	  delay(1000);
	  digitalWrite(led3, LOW);
	  delay(1000);

    while (etatbo3 == LOW) {
      
      if (etatbo3 == HIGH) {
        digitalWrite (led3, HIGH);
        delay(500);
        digitalWrite(led3, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led3, LOW);
        seq2_2();
      }
    }
  }

	else if (s2_1 == 4) {

	  digitalWrite(led4, HIGH);
	  delay(1000);
	  digitalWrite(led4, LOW);
	  delay(1000);

    while (etatbo4 == LOW) {
      
      if (etatbo4 == HIGH) {
        digitalWrite (led4, HIGH);
        delay(500);
        digitalWrite(led4, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led4, LOW);
        seq2_2();
      }
    }
  }
}



void seq2_2() {
  
	if (s2_2 == 1) {

	  digitalWrite(led2, HIGH);
	  delay(1000);
	  digitalWrite(led2, LOW);
	  delay(1000);
    
        while (etatbo1 == LOW) {
      
      if (etatbo1 == HIGH) {
        digitalWrite (led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led1, LOW);
        seq3_1();
      }
    }
  }

	else if (s2_2 == 2) {

	  digitalWrite(led2, HIGH);
	  delay(1000);
	  digitalWrite(led2, LOW);
	  delay(1000);

        while (etatbo2 == LOW) {
      
      if (etatbo2 == HIGH) {
        digitalWrite (led2, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led2, LOW);
        seq3_1();
      }
    }
  }

	else if (s2_2 == 3) {

	  digitalWrite(led3, HIGH);
	  delay(1000);
	  digitalWrite(led3, LOW);
	  delay(1000);

        while (etatbo3 == LOW) {
      
      if (etatbo3 == HIGH) {
        digitalWrite (led3, HIGH);
        delay(500);
        digitalWrite(led3, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led3, LOW);
        seq3_1();
      }
    }
  }

	else if (s2_2 == 4) {

	  digitalWrite(led4, HIGH);
	  delay(1000);
	  digitalWrite(led4, LOW);
	  delay(1000);

        while (etatbo4 == LOW) {
      
      if (etatbo4 == HIGH) {
        digitalWrite (led4, HIGH);
        delay(500);
        digitalWrite(led4, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led4, LOW);
        seq3_1();
      }
    }
  }
}
void seq3_1(){
  	if (s3_1 == 1) {

	  digitalWrite(led1, HIGH);
	  delay(1000);
	  digitalWrite(led1, LOW);
	  delay(1000);
    
    while (etatbo1 == LOW) {
      
      if (etatbo1 == HIGH) {
        digitalWrite (led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led1, LOW);
        seq3_2();
      }
    }
  }

	else if (s3_1 == 2) {

	  digitalWrite(led2, HIGH);
	  delay(1000);
	  digitalWrite(led2, LOW);
	  delay(1000);

      while (etatbo2 == LOW) {
      
      if (etatbo2 == HIGH) {
        digitalWrite (led2, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led2, LOW);
        seq3_2();
      }
    }
  }

	else if (s3_1 == 3) {

	  digitalWrite(led3, HIGH);
	  delay(1000);
	  digitalWrite(led3, LOW);
	  delay(1000);

    while (etatbo3 == LOW) {
      
      if (etatbo3 == HIGH) {
        digitalWrite (led3, HIGH);
        delay(500);
        digitalWrite(led3, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led3, LOW);
        seq3_2();
      }
    }
  }

	else if (s3_1 == 4) {

	  digitalWrite(led4, HIGH);
	  delay(1000);
	  digitalWrite(led4, LOW);
	  delay(1000);

    while (etatbo4 == LOW) {
      
      if (etatbo4 == HIGH) {
        digitalWrite (led4, HIGH);
        delay(500);
        digitalWrite(led4, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led4, LOW);
        seq3_2();
      }
    }
  }
}


void seq3_2() {
    	if (s3_2 == 1) {

	  digitalWrite(led1, HIGH);
	  delay(1000);
	  digitalWrite(led1, LOW);
	  delay(1000);
    
    while (etatbo1 == LOW) {
      
      if (etatbo1 == HIGH) {
        digitalWrite (led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led1, LOW);
        seq3_3();
      }
    }
  }

	else if (s3_2 == 2) {

	  digitalWrite(led2, HIGH);
	  delay(1000);
	  digitalWrite(led2, LOW);
	  delay(1000);

      while (etatbo2 == LOW) {
      
      if (etatbo2 == HIGH) {
        digitalWrite (led2, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led2, LOW);
        seq3_3();
      }
    }
  }

	else if (s3_2 == 3) {

	  digitalWrite(led3, HIGH);
	  delay(1000);
	  digitalWrite(led3, LOW);
	  delay(1000);

    while (etatbo3 == LOW) {
      
      if (etatbo3 == HIGH) {
        digitalWrite (led3, HIGH);
        delay(500);
        digitalWrite(led3, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led3, LOW);
        seq3_3();
      }
    }
  }

	else if (s3_2 == 4) {

	  digitalWrite(led4, HIGH);
	  delay(1000);
	  digitalWrite(led4, LOW);
	  delay(1000);

    while (etatbo4 == LOW) {
      
      if (etatbo4 == HIGH) {
        digitalWrite (led4, HIGH);
        delay(500);
        digitalWrite(led4, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led4, LOW);
        seq3_3();
      }
    }
  }
}


void seq3_3() {
  
    	if (s3_3 == 1) {

	  digitalWrite(led1, HIGH);
	  delay(1000);
	  digitalWrite(led1, LOW);
	  delay(1000);
    
    while (etatbo1 == LOW) {
      
      if (etatbo1 == HIGH) {
        digitalWrite (led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led1, LOW);
      }
    }
  }

	else if (s3_3 == 2) {

	  digitalWrite(led2, HIGH);
	  delay(1000);
	  digitalWrite(led2, LOW);
	  delay(1000);

      while (etatbo2 == LOW) {
      
      if (etatbo2 == HIGH) {
        digitalWrite (led2, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led2, LOW);
      }
    }
  }

	else if (s3_3 == 3) {

	  digitalWrite(led3, HIGH);
	  delay(1000);
	  digitalWrite(led3, LOW);
	  delay(1000);

    while (etatbo3 == LOW) {
      
      if (etatbo3 == HIGH) {
        digitalWrite (led3, HIGH);
        delay(500);
        digitalWrite(led3, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led3, LOW);
      }
    }
  }

	else if (s3_3 == 4) {

	  digitalWrite(led4, HIGH);
	  delay(1000);
	  digitalWrite(led4, LOW);
	  delay(1000);

    while (etatbo4 == LOW) {
      
      if (etatbo4 == HIGH) {
        digitalWrite (led4, HIGH);
        delay(500);
        digitalWrite(led4, LOW);
        delay(500);
      }
      else(){
        digitalWrite(led4, LOW);
      }
    }
  }
