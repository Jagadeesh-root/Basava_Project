void setup()
{
 Serial.begin(9600);
}
void loop()
{
 while(Serial.available())
 {
 char c=Serial.read();
 if(c=='A')
 {
 Serial.println("Hello message received, replied from Handson Technology");
 }
 }
 Serial.println("No");
}
