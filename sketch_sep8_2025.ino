const int buttonPin = 4;
const int red = 8;
const int green = 9;
const int blue = 7;

const int sensorPin=0;

int sensor;  //GRÖN = 9, RÖD = 8, BLÅ = 7

void setup() {
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {

  sensor=analogRead(sensorPin); //Ljussensor på A0, värde mellan 0-1023

  delay(250);


if(sensor<256){
 digitalWrite(red, LOW);
digitalWrite(green, LOW);
digitalWrite(blue, LOW);
}
else if(sensor<512){
 digitalWrite(red, HIGH);
digitalWrite(green, LOW);
digitalWrite(blue, LOW);
}
else if(sensor<768){
 digitalWrite(red, LOW);
digitalWrite(green, HIGH);
digitalWrite(blue, LOW);
}
else if(sensor<1024){
 digitalWrite(red, LOW);
digitalWrite(green, LOW);
digitalWrite(blue, HIGH);
}
}
