int led=13;
int PhotoDiode=2;
int pir=5;
int buzz=3;




void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
	pinMode(PhotoDiode, INPUT_PULLUP);
}
void ledFunction(){
  if(digitalRead(PhotoDiode)==HIGH)
    {
    digitalWrite(led, HIGH);
	}
	else
	{
		digitalWrite(led, LOW);
	}
}


void buzzer(){
  if(digitalRead(pir)==HIGH)
    {
   analogWrite(10, random(255));
  
    tone(buzz,50);
    delay(200);
	}
	else
	{
		noTone(buzz);
    delay(1000);
  
    }}
void loop()
{
  ledFunction();
  Serial.print(pir);
  buzzer();
  
}