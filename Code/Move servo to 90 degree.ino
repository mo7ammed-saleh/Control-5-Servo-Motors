// Include servo libirary
#include <Servo.h> 

int pos = 90; // set initial pisition to 0

Servo myservo1; // define variable constructor for the libirary for servo
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;

void setup()
{
  myservo1.attach(2, 500, 2500);
  myservo2.attach(3, 500, 2500);
  myservo3.attach(4, 500, 2500);
  myservo4.attach(5, 500, 2500);
  myservo5.attach(6, 500, 2500);
}

void loop()
{
  // sweep the servo from 0 to 180 degrees in steps of 1 degrees
 
    
    myservo1.write(pos);// tell servo to go to position in variable 'pos' which is 90
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    myservo5.write(pos);
      
    delay(15);       // waits 15ms for the servo to reach the position

  
}