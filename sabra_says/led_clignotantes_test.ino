const int bo1 = 2;     

const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

int etatbo1 = 0;

int del1 = random(1, 4);
int del2 = random(1, 4);
int del3 = random(1, 4);
int del4 = random(1, 4);

void setup() {
  
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);  
  
  pinMode(bo1, INPUT); 

  
}


 void loop(){
   etatbo1 = digitalRead(bo1);

 }
  void seq1() {
   
    if (del1 == 1) {

      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
      seq2();
    }

    else if (del1 == 2) {

      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      seq2();
    }

    else if (del1 == 3) {

      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
      delay(500);
      seq2();
    }

      else if (del1 == 4) {

      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
      delay(500);
      seq2();
    }
  }
  void seq2() {

    if (del2 == 1) {

      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
      seq3();
    }
    
    else if (del2 == 2) {

      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      seq3();
    }
    
    else if (del2 == 3) {

      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
      delay(500);
      seq3();
    }
        
    else if (del2 == 4) {

      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
      delay(500);
      seq3();
    }
  }

  void seq3() {

    if (del3 == 1) {

      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
    }
    
    else if (del3 == 2) {

      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
    }
    
    else if (del3 == 3) {

      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
      delay(500);
    }
        
    else if (del3 == 4) {

      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
      delay(500);
    }
  }
 
