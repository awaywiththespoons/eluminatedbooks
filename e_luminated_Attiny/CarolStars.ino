/*
* Sensor_Blink for e-luminated books workshop by Becca Rose 2015, edited for Carol Dwindell's stars!
* http://www.beccarose.co.uk
*
* This sketch will change the blink rate according to the resistance of the sensor. It is originally desgigned
* to be used with the for the Attiny85
*
*/

//Pin connections: these are going to flash at random
int randomLED3 = 3;
int randomLED4 = 4;
int randomFADE0 = 0;
int randomFADE1 = 1; 

void setup()
{
  pinMode(randomLED3, OUTPUT);
  pinMode(randomLED4, OUTPUT);
  pinMode(randomFADE0, OUTPUT);
  pinMode(randomFADE1, OUTPUT);
}

void loop()
{
  //pick a number at random this is in the loop so it will choose new random number for each loop
  int randNumber = random(5, 100);

//random bit of program
  digitalWrite(randomLED3, HIGH);
  delay (randNumber);
  digitalWrite(randomLED3, LOW);
  digitalWrite(randomLED4, HIGH);
  delay (randNumber);
  digitalWrite(randomLED4, LOW);
  digitalWrite(randomFADE0, HIGH);
  delay (randNumber);
  digitalWrite(randomFADE0, LOW);
  digitalWrite(randomFADE1, HIGH);
  delay (randNumber);
  digitalWrite(randomFADE1, LOW);
 
// fade bit of program
  digitalWrite(randomFADE0, 130);
  delay (randNumber);
  digitalWrite(randomFADE0, LOW);
  digitalWrite(randomFADE1, 130);
  delay (randNumber);
  digitalWrite(randomFADE1, LOW);
}

