//Master Sender

int btn1 = 8;
int btn2 = 9;
int btn3 = 10;
int btn4 = A4;

int b1s = 0;
int b2s = 0;
int b3s = 0;
int b4s = 0;

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(btn3,INPUT);
  pinMode(btn4,INPUT);
}

void loop() {

  b1s = digitalRead(btn1);
  b2s = digitalRead(btn2);
  b3s = digitalRead(btn3);
  b4s = digitalRead(btn4);
  
  if(b1s == HIGH)
  {
  Serial.write('1'); //Write the serial data
  delay(1000);

  }

  else if(b2s == HIGH)
  {
  Serial.write('2'); //Write the serial data
  delay(1000);
  }

  else if(b3s == HIGH)
  {
  Serial.write('3'); //Write the serial data
  delay(1000);
  }
}
