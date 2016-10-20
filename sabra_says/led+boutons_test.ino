const int bo1 = 2; //initialiser boutton1 (bo1 = boutton1) à partir du port 2
const int bo2 = 3;
const int bo3 = 4;
const int bo4 = 5;     

const int led1 = 13;//initialiser la led1 dans le port 13
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

int etatbo1;//initialiser l'état du boutton 1
int etatbo2;
int etatbo3;
int etatbo4;



void setup() {

  pinMode(led1, OUTPUT);//présenter la led1 comme output(envoie de l'information)
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  pinMode(bo1, INPUT);//présenter le boutton1 comme input(reçoit de l'info)
  pinMode(bo2, INPUT);
  pinMode(bo3, INPUT);
  pinMode(bo4, INPUT);
}

void loop() {
  etatbo1 = digitalRead(bo1);//état du boutton1 = etatbo1
  etatbo2 = digitalRead(bo2);
  etatbo3 = digitalRead(bo3);
  etatbo4 = digitalRead(bo4);
}
void seq1() {

digitalWrite (led1, HIGH);//allumer la led1
delay(500);//attendre 0,5 secondes
digitalWrite(led1, LOW);//éteindre la led1
delay(500);


  if (etatbo1 == HIGH) {// si l'état du boutton1 est haut(qu'on appuie dessus)
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);//attendre 1 seconde
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
    seq2_1();//commencer la séquence 2_1
  }
  else if (etatbo2 == HIGH) {//si le premier 'if' est faux, si l'état du boutton2 est haut
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
    seq1();//commencer la séquence 1
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

  else {//sinon
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


