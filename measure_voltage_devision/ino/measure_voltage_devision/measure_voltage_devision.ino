// this shows some resistors in row and the voltage devision
// 
int measure_pin_one = A0;
int measure_pin_two = A1;
int measure_pin_three = A2;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int raw_one = analogRead(measure_pin_one);
  int raw_two = analogRead(measure_pin_two);
  int raw_three = analogRead(measure_pin_three);

  Serial.print("Voltage at point one is: ");
  Serial.println((5.0 / 1023.0) *raw_one);
  Serial.print("Voltage at point two is: ");
  Serial.println((5.0 / 1023.0) *raw_two);
  Serial.print("Voltage at point three is: ");
  Serial.println((5.0 / 1023.0) *raw_three);
  delay(1000);
}
