int pot=A0;
void setup() 
{
  pinMode(pot,INPUT);
  Serial.begin(9600);
}




void loop() 
{
  int val=analogRead(pot);
   Serial.print("pot val=");
   Serial.print(val);
   delay(100);

}
