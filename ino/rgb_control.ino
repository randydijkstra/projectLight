/*
Adafruit Arduino - Lesson 3. RGB LED
*/
 
int redPin = 11;
int greenPin = 9;
int bluePin = 10;


 
 
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{

  setColor(255,255,255);


}
 
void setColor(int red, int green, int blue)
{
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
