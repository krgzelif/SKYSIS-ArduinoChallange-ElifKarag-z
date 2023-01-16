//Night Lighter

int led = 13;
int photocell = A2;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(photocell,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(photocell);
  
  if(value>=900){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  
  Serial.println(value);
  
  delay(1);
}
