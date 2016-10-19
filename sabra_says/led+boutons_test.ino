const int bo1 = 2;
const int bo2 = 3;
const int bo3 = 4;
const int bo4 = 5;     

const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

int etatbo1;
int etatbo2;
int etatbo3;
int etatbo4;



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
  etatbo1 = digitalRead(bo1);
  etatbo2 = digitalRead(bo2);
  etatbo3 = digitalRead(bo3);
  etatbo4 = digitalRead(bo4);
}
void seq1() {

digitalWrite (led1, HIGH);
delay(500);
digitalWrite(led1, LOW);
delay(500);


  if (etatbo1 == HIGH) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(500);
    seq2_1();
  }
  else if (etatbo2 == HIGH) {
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    seq1();
  }
  
  else if (etatbo3 == HIGH) {
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    seq1();
  }

  else if (etatbo4 == HIGH) {
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    seq1();
  }

  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
}

  void seq2_1() {

  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);


  if (etatbo1 == HIGH) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    seq2_2();
  }

  else if (etatbo2 == HIGH) {
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    seq1();
  }

  else if (etatbo3 == HIGH) {
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    seq1();
  }

  else if (etatbo4 == HIGH) {
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    seq1();
  }
 }

  void seq2_2() {

  if (etatbo2 == HIGH) {
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(500);
  }

  else if (etatbo1 == HIGH) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    seq1();
  }
  
  else if (etatbo3 == HIGH) {
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    seq1();
  }

  else if (etatbo4 == HIGH) {
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    seq1();
  }
}


