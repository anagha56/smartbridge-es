void setup() 
{
  
Serial.begin(115200);

}

void loop() 
{
  int temperatureValue= analogRead(2)/4;
  Serial.println( "temperature Value is");
  Serial.println(temperatureValue);
  Serial.println("temp(c)");
}
