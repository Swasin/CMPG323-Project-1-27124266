void setup() 
{
  // put your setup code here, to run once:
       
  pinMode(13,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  for(int x = 0; x < 5; x++)
  {
    //analogWrite(13,100);
    digitalWrite(13,HIGH);
    delay(600);
    digitalWrite(13,LOW);
    delay(600);
  }
  for(int x = 0; x < 5; x++)
  {
    analogWrite(11,100);
    digitalWrite(11,HIGH);
    delay(350);
    digitalWrite(11,LOW);
    delay(350);
  }

  for(int x = 0; x < 5; x++)
  {
    analogWrite(9,100);
    digitalWrite(9,HIGH);
    delay(200);
    digitalWrite(9,LOW);
    delay(200);
  }
  
}
