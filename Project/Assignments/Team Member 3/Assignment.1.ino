float x,y ;
void setup ()
{
  pinMode( 8, INPUT);
  pinMode( 5, OUTPUT);
  pinMode( A5, INPUT);
  Serial.begin(9600);
}
void loop ()
{
  x= digitalRead(8);
  y= analogRead(A5);
  Serial.println(x);
  Serial.println(y);
  if ( (x>0) && (y<550))
  { 
    digitalWrite(5, HIGH);
    delay (5000);
  }
  else
    digitalWrite(5, 0);
}