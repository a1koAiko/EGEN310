/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013
  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep

 and agian extensively, mar, and apr 2018
 by Steve Rolland
*/

#include <Servo.h>
// twelve servo objects can be created on most boards
Servo rearServo; 
Servo frontServo;

//const int switchPin = 15;
const int motorPin = 10;
int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  rearServo.attach(9);// attaches the rear servo on pin 11 to the servo object.
 // frontServo.attach(7, 544, 2400);
  //frontServo.attach(7);
//  pinMode(switchPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
//rearServo.write(0);
  ///delay(2000);
  //frontServo.write(0);
 // rearServo.writeMicroseconds(2000);
  rearServo.write(0);
  //delay(10000);
  //frontServo.write(30);
 //delay(4000);


// // Back-up 
// while(!Serial){
// digitalWrite(15, HIGH);
// analogWrite(30, LOW);
// }
 //delay(4000);
// digitalWrite(15, LOW);
// analogWrite(30, HIGH);
// delay(10000);

//forward rev up
 for (int i = 0; i <= 255; i++) {
   analogWrite(motorPin, i);
   delay(10);
 }
// forward rev down
 delay(4000);
 for (int i = 0; i <= 255; i++) {
   analogWrite(motorPin, i);
   delay(10);
 }
 //Steering basics

   for (pos = 10; pos <= 180; pos += 1){
       rearServo.write(pos);
        //frontServo.write(pos);// tell servo to go to position in variable 'pos'
      delay(20);                       // waits 20ms for the servo to reach the position
    }
    for (pos = 180; pos >= 10; pos -= 1){
        rearServo.write(pos);
         //frontServo.write(pos); // tell servo to go to position in variable 'pos'
        delay(20);                       // waits 20ms for the servo to reach the position
    }
}
Swee
