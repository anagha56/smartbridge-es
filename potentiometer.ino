void setup() 
{
  
Serial.begin(115200);

}

void loop() 
{
  int potentiometerValue= analogRead(2)/4;
  Serial.println( "potentiometer Value is");
  Serial.println(potentiometerValue);
  Serial.println("volts");
}
