const byte segA = 10;
const byte segB = 11;
const byte segC = 12;
const byte segD = 14;
const byte segE = 15;
const byte segF = 16;
const byte segG = 17;
const byte segP = 18;

int num = 0;

const byte interruptPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(segP, OUTPUT);
  pinMode(interruptPin,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin),clickButton , FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
  displayNum(num);
}

void clickButton() {
  if (num < 9) num++;
}

void displayNum(int number){
  switch (number){
    case 0:
      display0();
      break;
    case 1:
      display1();
      break;
    case 2:
      display2();
      break;
    case 3:
      display3();
      break;
    case 4:
      display4();
      break;
      
    case 5:
      display5();
      break;
    case 6:
      display6();
      break;
    case 7:
      display7();
      break;
    case 8:
      display8();
      break;
    case 9:
      display9();
      break;
    default:
      //num = 0;
      //display9();
      break;
  }
}

void display0(){
  digitalWrite(segA, LOW); 
  digitalWrite(segB, LOW); 
  digitalWrite(segC, LOW); 
  digitalWrite(segD, LOW); 
  digitalWrite(segE, LOW); 
  digitalWrite(segF, LOW); 
  digitalWrite(segG, HIGH); 
  digitalWrite(segP, LOW); 
}

void display1(){
  digitalWrite(segA, HIGH); 
  digitalWrite(segB, LOW); 
  digitalWrite(segC, LOW); 
  digitalWrite(segD, HIGH); 
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH); 
  digitalWrite(segG, HIGH); 
  digitalWrite(segP, LOW); 
}
void display2(){
  digitalWrite(segA, LOW); 
  digitalWrite(segB, LOW); 
  digitalWrite(segC, HIGH); 
  digitalWrite(segD, LOW); 
  digitalWrite(segE, LOW); 
  digitalWrite(segF, HIGH); 
  digitalWrite(segG, LOW); 
  digitalWrite(segP, LOW); 
}
void display3(){
  digitalWrite(segA, LOW); 
  digitalWrite(segB, LOW); 
  digitalWrite(segC, LOW); 
  digitalWrite(segD, LOW); 
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH); 
  digitalWrite(segG, LOW); 
  digitalWrite(segP, LOW); 
}
void display4(){
  digitalWrite(segA, HIGH); 
  digitalWrite(segB, LOW); 
  digitalWrite(segC, LOW); 
  digitalWrite(segD, HIGH); 
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, LOW); 
  digitalWrite(segG, LOW); 
  digitalWrite(segP, LOW); 
}
void display5(){
  digitalWrite(segA, LOW); 
  digitalWrite(segB, HIGH); 
  digitalWrite(segC, LOW); 
  digitalWrite(segD, LOW); 
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, LOW); 
  digitalWrite(segG, LOW); 
  digitalWrite(segP, LOW); 
}
void display6(){
  digitalWrite(segA, LOW); 
  digitalWrite(segB, HIGH); 
  digitalWrite(segC, LOW); 
  digitalWrite(segD, LOW); 
  digitalWrite(segE, LOW); 
  digitalWrite(segF, LOW); 
  digitalWrite(segG, LOW); 
  digitalWrite(segP, LOW); 
}
void display7(){
  digitalWrite(segA, LOW); 
  digitalWrite(segB, LOW); 
  digitalWrite(segC, LOW); 
  digitalWrite(segD, HIGH); 
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH); 
  digitalWrite(segG, HIGH); 
  digitalWrite(segP, LOW); 
}
void display8(){
  digitalWrite(segA, LOW); 
  digitalWrite(segB, LOW); 
  digitalWrite(segC, LOW); 
  digitalWrite(segD, LOW); 
  digitalWrite(segE, LOW); 
  digitalWrite(segF, LOW); 
  digitalWrite(segG, LOW); 
  digitalWrite(segP, LOW); 
}
void display9(){
  digitalWrite(segA, LOW); 
  digitalWrite(segB, LOW); 
  digitalWrite(segC, LOW); 
  digitalWrite(segD, LOW); 
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, LOW); 
  digitalWrite(segG, LOW); 
  digitalWrite(segP, LOW); 
}
