#include <Servo.h>

//Slave Reciever
#include <Stepper.h>
char choose;
//int led = 13;
boolean isOpen1 = false;
boolean isOpen2 = false;
boolean isOpen3 = false;
boolean isOpen4 = false;

Stepper motor1(512,2,3,4,5);
Stepper motor2(512,6,7,8,9);
Stepper motor3(512,10,11,12,13);

Servo s;



void setup() {
  Serial.begin(9600);
  motor1.setSpeed(50);
  motor2.setSpeed(50);
  motor3.setSpeed(50);
  s.attach(3);
  s.write(0);
}

void loop() {
  choose = Serial.read(); //Read the serial data and store in var
  Serial.println(choose);
  if(choose == '1')
  {
    if(isOpen1)
    {
      Serial.println("1open");
      motor1.step(270);
      isOpen1 = false;
      s.write(90);
    }
    else
    {
      Serial.println("1close");
      motor1.step(-270);
      isOpen1 = true;
      s.write(90);

    }
  }

  else if(choose == '2')
  {
    if(isOpen2)
    {
      Serial.println("2open");
      motor2.step(270);
      isOpen2 = false;
      s.write(45);

    }
    else
    {
      Serial.println("2close");
      motor2.step(-270);
      isOpen2 = true;
      s.write(45);
    }
  }

  else if(choose == '3')
  {
    if(isOpen3)
    {
      Serial.println("3open");
     motor3.step(270);
     isOpen3 = false;
     s.write(120);
    }
    else
    {
      Serial.println("3close");
      motor3.step(-270);
      isOpen3 = true;
      s.write(120);
    }
  }
  delay(1000);
}
