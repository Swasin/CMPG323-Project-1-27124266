int myVoltPin = A2;
int readVal;
float V2;
int delayT = 250;


// put your setup code here, to run once:

void setup() 
{
  Serial.begin(9600);
}



// put your main code here, to run repeatedly:

void loop() 
{
  readVal = analogRead(myVoltPin);
  V2 = (5./1023.)*readVal;
  Serial.println(V2);
  delay(delayT);

}
