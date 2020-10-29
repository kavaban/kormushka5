#include <Servo.h> 

Servo servo; 

void setup() 

{

servo.attach(10);

}

void loop()

{
delay(10000); 

servo.write(15); 

delay(1000); 

servo.write(0); 

delay(18000000);

servo.write(15); 

delay(1000); 

servo.write(0); 

delay (68390000);




}
