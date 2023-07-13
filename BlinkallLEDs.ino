/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 14 July 2023
  by Purushottam Anand

  This example code is in the public domain.
*/

// the setup function runs once when you press reset or power the board
void setup() {

  int i, n=13;

  for(i=0; i<=n; i++)
  {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
    delay(10);
  }
}

void loop() {

  int i, n=13;

  for(i=0; i<=n; i++)
  {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
    delay(10);
  }
}

