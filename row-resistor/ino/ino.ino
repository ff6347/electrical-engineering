int measure_pin_one = A0;
int measure_pin_two = A1;
int measure_pin_three = A2;
void void setup(){
  Serial.begin(9600);
}

void void loop(){
  int resistance_one = analogRead(measure_pin_one);
  int resistance_two = analogRead(measure_pin_two);
  int resistance_three = analogRead(measure_pin_three);

  Serial.print("Resistance at point one is: ");
  Serial.println(resistance_one);
  Serial.print("Resistance at point two is: ");
  Serial.println(resistance_two);
  Serial.print("Resistance at point three is: ");
  Serial.println(resistance_three);
  delay(1000);
}