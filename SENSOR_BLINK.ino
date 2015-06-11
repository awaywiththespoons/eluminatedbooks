/*
* Sensor_Blink for e-luminated books workshop by Becca Rose 2015
* http://www.beccarose.co.uk
*
* This sketch will change the blink rate according to the resistance of the sensor. It is originally desgigned
* to be used with the for the arduino and Attiny85
*/

//first define variables you are using (ingredients)

//Pin connections
int sensorPin = A1; //sensor (i.e. photoresistor, pressure sensor, switch)
int LEDpin = 1; //dims, determined by sensor



void setup() //setup is the preperation before the main loop
{
  pinMode(sensorPin, INPUT_PULLUP); //the sensor pin is an input, and we are using an internal pullup resisitor
  pinMode(LEDpin, OUTPUT); //the LED pin is an output
}

void loop() //the main loop
{
  int sensorState = analogRead(sensorPin); //read the sensor pin, and assign that value to "sensorState"
  int fadeAmount = map(sensorState, 0, 1023, 0, 255); //change the range of the sensor pin, and assign new range to be the fade amount

  digitalWrite(LEDpin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(fadeAmount);              // wait for duration that is defined by sensor
  digitalWrite(LEDpin, LOW);    // turn the LED off by making the voltage LOW
  delay(fadeAmount);              // wait for duration that is defined by sensor
}
