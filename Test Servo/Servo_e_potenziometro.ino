/*
  Questo codice è utile per testare i servo motori, 
  una volta installati sull'alloggio delle ruote del rover, 
  e verificare l'angolo di sterzata delle ruote.
*/
#include <Servo.h>
 
Servo myservo;
 
int Potenziometro = 0;
int Valore;
 
void setup()
{
  myservo.attach(9);
}
 
void loop()
{
  Valore = analogRead(Potenziometro);
  Valore = map(Valore, 0, 1023, 0, 179);
  myservo.write(Valore);
  delay(15);
}

// Stefano Milantoni
