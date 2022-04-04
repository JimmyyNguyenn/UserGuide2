int MotorPin1 = 5; //Set the MotorPin1 variable to pin 5
int MotorPin2 = 6; //Set the MotorPin2 variable to pin 6

void setup() {
  pinMode(MotorPin1, OUTPUT); //Set the pin of the MotorPin1(5) as an OUTPUT
  pinMode(MotorPin2, OUTPUT); //Set the pin of the MotorPin2(6) as an OUTPUT
}

void loop() {
  digitalWrite(MotorPin1, HIGH); //Set the MotorPin1 to HIGH
  digitalWrite(MotorPin2, LOW);  //Set the MotorPin2 to LOW
  delay(2000);                   //Will let the instructions above for the 2 seconds

  digitalWrite(MotorPin1, LOW);  //Set the MotorPin1 to LOW
  digitalWrite(MotorPin2, HIGH); //Set the MotorPin2 to HIGH
  delay(2000);                   //Will let the instructions above for the 2 seconds
}
