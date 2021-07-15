int analogPin = A0;
int Air_Quality_Value = 0; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int Air_Quality_Value = analogRead(analogPin);
  /*Serial.print("Air Quality : ");*/
  Serial.println(Air_Quality_Value);
  /*Serial.print("ppm\n");*/
  delay(700);
}
