

int ledPin = 13;      
int analogPin = 3;   
int val = 0;         

void setup()
{
  pinMode(ledPin, OUTPUT);   
}

void loop()
{
  val = analogRead(analogPin);  
  analogWrite(ledPin, val / 4);  
  delay(4000);
}
