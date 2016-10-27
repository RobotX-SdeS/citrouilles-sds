const int led1 = 13;
const int led2 = 12;

const int bo1 = 2;
const int bo2 = 3;

int etatbo1;
int etatbo2;

int Playans; 
int Corrans;



void setup() {
  
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  
  pinMode(bo1, INPUT);
  pinMode(bo2, INPUT);
   
}

void loop() {
  etatbo1 = digitalRead(bo1);
  etatbo2 = digitalRead(bo2);
  

  seq1();
}

void seq1() {
  
  
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  setup_seq1();
}

void setup_seq1() {

 while (etatbo1 == LOW && etatbo2 == LOW) {
  
  if (etatbo1 == HIGH) {
    Playans = 1;
  }
  
  else if (etatbo2 == HIGH) {
    Playans = 2;
  }
  
  else {
    Playans = 0;
  }
  ans();
 }
void ans() {
  
 Corrans = 1;
  
 

  if (Playans == Corrans) {
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
    
  }
  
  else if (Playans > Corrans) {
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(1000);
    
  }
  
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
 }


    
  