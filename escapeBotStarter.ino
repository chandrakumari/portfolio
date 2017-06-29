#include <Servo.h>

int rightWhiskerPin = 7;
int leftWhiskerPin = 5;
int rightWhiskerState = 0;
int leftWhiskerState = 0;
Servo servoRight;
Servo servoLeft;

void setup() {                     
  delay(1000);    
  pinMode(rightWhiskerPin, INPUT);
  pinMode(leftWhiskerPin, INPUT);
  Serial.begin(9600);
  servoLeft.attach(12);
  servoRight.attach(13);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1300);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  rightWhiskerState = digitalRead(rightWhiskerPin);
  leftWhiskerState = digitalRead(leftWhiskerPin);
  // whisker state is 1 if unpressed and 0 if pressed.
  //Program Here
}

void stopnow(){
  //Fill this part in
}

void forward(int time)                       // Forward function
{
  //Fill this in
}

void turnLeft(int time)                      // Left turn function
{
  //Fill this in                              // Maneuver for time ms
}

void turnRight(int time)                     // Right turn function
{
  //Fill this in                              // Maneuver for time ms
}

void backward(int time)                      // Backward function
{
  //Fill this in                               // Maneuver for time ms
}


