// If you want to work with relay then replace Led with Relay and connec t relay at PIN 6
int PIR =7;
int LED =6;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(PIR,INPUT);
  pinMode(LED,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int A=digitalRead(PIR);
  if(A==1)
  { digitalWrite(LED,HIGH); }
  else  digitalWrite(LED,LOW);
}
