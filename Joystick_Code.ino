int enableB = 10;
int in3= 8;
int in4 = 7;
void setup() {
pinMode(enableB, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);


}
void loop() {

  int PWMSpeed = 0;
  int joystickValue = analogRead(A0);

  if (joystickValue >= 530)
  {
    PWMSpeed = map(joystickValue, 530, 1023, 0, 255);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite (enableB, PWMSpeed);

  }
  else if (joystickValue <= 490)
  {
    PWMSpeed = map(joystickValue, 490, 0, 0, 255);
    digitalWrite (in3, LOW);
    digitalWrite (in4, HIGH);
    analogWrite (enableB, PWMSpeed);

  }
else
{
  digitalWrite(in3,LOW);
  digitalWrite(in4, LOW);
}
}

 
