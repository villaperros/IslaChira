/*

   _     ____       _  ____  _     ____  _  ____
  / \   /  _ \     / |/  _ \/ \ /\/  __\/ \/  _ \
  | |   | / \|     | || / \|| | |||  \/|| || / \|
  | |_/\| |-||  /\_| || |-||| \_/||    /| || |-||
  \____/\_/ \|  \____/\_/ \|\____/\_/\_\\_/\_/ \|


 ATTINY 85   + Ultrasonic sensor + Adafruit FX sound Board.
 Version 1.0

  Creado por Joan Villaperros
  Revisión 1 - Alex Vargas Benanburg.

*/


const int pingPin = 3;  //echo
const int pingPin1 = 2; //trigger
int ledverde = 0;  // test, conecte un led verde desde el chip pin 5 
int ledazul = 1; // test, ponga un led azul desde el chip pin 6 

void setup() {

}

void loop()
{

  long duration, inches, cm;

  pinMode(pingPin1, OUTPUT);
  digitalWrite(pingPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin1, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin1, LOW);

  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  

  if (cm < 195  ) {     // si quiere ajustar la distancia, cambie este valor.
  pinMode(ledverde, OUTPUT);
  digitalWrite(ledverde, LOW);
  delayMicroseconds(1);  
  } else {
    
     digitalWrite(ledverde, HIGH);
  } 
  
   if (cm > 2000  ) {
  pinMode(ledazul, OUTPUT);
  digitalWrite(ledazul, HIGH);

   digitalWrite(ledverde, HIGH);
  delayMicroseconds(1);   
  } else {
    
     digitalWrite(ledazul, LOW);
    
  delayMicroseconds(1);  
  }   
  
  delay(100);
}

long microsecondsToInches(long microseconds)
{
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;

}

