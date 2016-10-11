const int bo1 = 2;     
const int bo2 = 3;
const int bo3 = 4;
const int bo4 = 5;
const int led1 =  13;
const int led2 =  12;
const int led3 =  11;
const int led4 =  10;



int buttonState = 0;         

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

void loop(){
  
  buttonState = digitalRead(buttonPin);

 
  if (buttonState == HIGH) {     
  
    digitalWrite(led1, HIGH);  
  } 
  else {
  
    digitalWrite(led1, LOW); 
  }
}
