int ledPin = 13;
int ledPin1 = 12;
int ledPin2 = 11;
int ledPin3 = 10;
int ledPin4 = 9;
int ledPin5 = 8;
int ledPin6 = 7;
int ledPin7 = 6;
int blinkTime = 1000;

void setup()
{
  pinMode(ledPin, OUTPUT);
   pinMode(ledPin1, OUTPUT);
   pinMode(ledPin2, OUTPUT);
   pinMode(ledPin3, OUTPUT);
   pinMode(ledPin4, OUTPUT);
   pinMode(ledPin5, OUTPUT);
   pinMode(ledPin6, OUTPUT);
   pinMode(ledPin7, OUTPUT);
  blinkyBlinky(60, blinkTime);
}

void loop()
{
 
}

void blinkyBlinky(int repeats, int time)
{
  for (int i = 0; i < repeats; i++)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
    
  }
}