const int bo1 = 2;     

const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

int etatbo1 = 0;

int s1 = random(1, 4);
int s2 = random(1, 4);
int s3 = random(1, 4);
int s4 = random(1, 4);

void setup() {
  
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);  
  
  pinMode(bo1, INPUT); 

  
}


 void loop(){
   etatbo1 = digitalRead(bo1);
   
   seq1();
   seq2();
   seq3();
   seq4();
   //reset settings s1, s2, s3, s4

 }
  void seq1() {
   
    if (s1 == 1) {

      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
    }

    else if (s1 == 2) {

      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
    }

    else if (s1 == 3) {

      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
      delay(500);
    }

      else if (s1 == 4) {

      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
      delay(500);
    }
  }
  void seq2() {

    if (s2 == 1) {

      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
    }
    
    else if (s2 == 2) {

      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
    }
    
    else if (s2 == 3) {

      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
      delay(500);
    }
        
    else if (s2 == 4) {

      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
      delay(500);
    }
  }

  void seq3() {

    if (s3 == 1) {

      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
    }
    
    else if (s3 == 2) {

      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
    }
    
    else if (s3 == 3) {

      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
      delay(500);
    }
        
    else if (s3 == 4) {

      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
      delay(500);
    }
  }
 
  void seq4() {

    if (s4 == 1) {

      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(3000);
    }
    
    else if (s4 == 2) {

      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(3000);
    }
    
    else if (s4 == 3) {

      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
      delay(3000);
    }
        
    else if (s4 == 4) {

      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
      delay(3000);
    }
  }
 
