#include <Servo.h>

Servo myservo;  // create servo object to control a servo 


//Motor Connections
//Change this if you wish to use another diagram
#define EnA 3
#define EnB 10
#define In1 5
#define In2 6
#define In3 7
#define In4 8
 
 
void setup()
{
  // attaches the servo on pin 9 to the servo object 
  myservo.attach(9);
  
  // All motor control pins are outputs
  pinMode(EnA, OUTPUT);
  pinMode(EnB, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
}
void goStop()   //all off
{
  // now turn off motors
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);  
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
}
void goStraight()   //run both motors in the same direction
{
  myservo.write(88); //make wheels straight
  // turn on motor A
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  // set speed to 150 out 255
  analogWrite(EnA, 20);
  // turn on motor B
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  // set speed to 150 out 255
  analogWrite(EnB, 50);
  delay(200);
}
void goReverse()   //run both motors in the same direction reversed
{
  myservo.write(88); //make wheels straight
  // turn on motor A
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  analogWrite(EnA, 20);
  // turn on motor B
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnB, 50);
  delay(200);
}
void goSteerLeft()   //Activate steer left and forward
{
  myservo.write(88);
  delay(1000);
  myservo.write(120);
  delay(1000);
    // turn on motor A
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  // set speed to 150 out 255
  analogWrite(EnA, 20);
  // turn on motor B
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  // set speed to 150 out 255
  analogWrite(EnB, 50);
  delay(170);
}
void goSteerRight()   //Activate steer right and forward
{
  myservo.write(88);
  delay(1000);
  myservo.write(60);
  delay(1000);
    // turn on motor A
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  // set speed to 150 out 255
  analogWrite(EnA, 20);
  // turn on motor B
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  // set speed to 150 out 255
  analogWrite(EnB, 50);
  delay(160);
}
void loop()
{
  goStraight();
  goReverse();
}
