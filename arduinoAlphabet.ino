int solenoidPin1 = 5;                    //This is the output pin on the Arduino
int solenoidPin2 = 6;
int solenoidPin3 = 7;
int solenoidPin4 = 8;
int solenoidPin5 = 9;
int solenoidPin6 = 10;
int letter = 0;

void setup() 
{
  pinMode(solenoidPin1, OUTPUT);          //Sets that pin as an output
  pinMode(solenoidPin2, OUTPUT);          //Sets that pin as an output
  pinMode(solenoidPin3, OUTPUT);          //Sets that pin as an output
  pinMode(solenoidPin4, OUTPUT);          //Sets that pin as an output
  pinMode(solenoidPin5, OUTPUT);          //Sets that pin as an output
  pinMode(solenoidPin6, OUTPUT);          //Sets that pin as an output
}

void loop() 
{
//  digitalWrite(solenoidPin, HIGH);      //Switch Solenoid ON
//  delay(1000);                          //Wait 1 Second
//  digitalWrite(solenoidPin, LOW);       //Switch Solenoid OFF
//  delay(1000);                          //Wait 1 Second
//  digitalWrite(solenoidPin, HIGH);      //Switch Solenoid ON
//  delay(1000);                          //Wait 1 Second
//  digitalWrite(solenoidPin, LOW);       //Switch Solenoid OFF
//  delay(1000);                          //Wait 1 Second

if (letter == 65 or letter == 97){
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 32) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 69 or letter == 101){
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 73 or letter == 105){
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 79 or letter == 111){
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 85 or letter == 117) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);}

else if (letter == 66 or letter == 98) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 67 or letter == 99) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 68 or letter == 100) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 70 or letter == 102) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 71 or letter == 103) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 72 or letter == 104) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 74 or letter == 106) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 75 or letter == 107) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 76 or letter == 108) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 77 or letter == 109) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 78 or letter == 110) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 80 or letter == 112) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 81 or letter == 113) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 82 or letter == 114) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 83 or letter == 115) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 84 or letter == 116) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 86 or letter == 118) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);}

else if (letter == 87 or letter == 119) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, HIGH);}

else if (letter == 88 or letter == 120) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);}

else if (letter == 89 or letter == 121) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);}

else if (letter == 90 or letter == 122) {
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);}

else if (letter == 35) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);}

else if (letter == 48) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);
    delay(1000);
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);
    delay(1000);}
    
else if (letter == 49) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);
    delay(1000);
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 50) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);
    delay(1000);
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);
    delay(1000);}

else if (letter == 51) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);
    delay(1000);
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);
    delay(1000);}

else if (letter == 52) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);
    delay(1000);
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);
    delay(1000);}

else if (letter == 53) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);
    delay(1000);
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);
    delay(1000);}

else if (letter == 54) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);
    delay(1000);
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);
    delay(1000);}

else if (letter == 55) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);
    delay(1000);
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);
    delay(1000);}
  
else if (letter == 56) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);
    delay(1000);
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);
    delay(1000);}

else if (letter == 57) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);
    delay(1000);
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, HIGH);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);
    delay(1000);}

else if (letter == 33) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, LOW);}
//
//else if (letter == ''') {
//    digitalWrite(solenoidPin1, LOW);
//    digitalWrite(solenoidPin2, LOW);
//    digitalWrite(solenoidPin3, LOW);
//    digitalWrite(solenoidPin4, LOW);
//    digitalWrite(solenoidPin5, HIGH);
//    digitalWrite(solenoidPin6, LOW);}

else if (letter == 44) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, LOW);}

else if (letter == 45) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, LOW);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);}

else if (letter == 46) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, HIGH);
    digitalWrite(solenoidPin5, LOW);
    digitalWrite(solenoidPin6, HIGH);}

else if (letter == 63) {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(solenoidPin3, HIGH);
    digitalWrite(solenoidPin4, LOW);
    digitalWrite(solenoidPin5, HIGH);
    digitalWrite(solenoidPin6, HIGH);}

else
    digitalWrite(solenoidPin1, LOW);
//
//if (letter == 'A')
//    letter = 'B';
//else if (letter == 'B')
//    letter = 'C';
//else if (letter == 'C')
//    letter = 'D';
//else if (letter == 'D')
//    letter = 'E';
//else if (letter == 'E')
//    letter = 'F';
//else if (letter == 'F')
//    letter = 'G';
//else if (letter == 'G')
//    letter = 'H';
//else if (letter == 'H')
//    letter = 'I';
//else if (letter == 'I')
//    letter = 'J';
//else if (letter == 'J')
//    letter = 'K';
//else if (letter == 'K')
//    letter = 'L';
//else if (letter == 'L')
//    letter = 'M';
//else if (letter == 'M')
//    letter = 'N';
//else if (letter == 'N')
//    letter = 'O';
//else if (letter == 'O')
//   letter = 'P';
//else if (letter == 'P')
//    letter = 'Q';
//else if (letter == 'Q')
//    letter = 'R';
//else if (letter == 'R')
//    letter = 'S';
//else if (letter == 'S')
//    letter = 'T';
//else if (letter == 'T')
//    letter = 'U';
//else if (letter == 'U')
//    letter = 'V';
//else if (letter == 'V')
//    letter = 'W';
//else if (letter == 'W')
//    letter = 'X';
//else if (letter == 'X')
//    letter = 'Y';
//else if (letter == 'Y')
//    letter = 'Z';
//else
//    letter = 'A';

delay(1000);
}
