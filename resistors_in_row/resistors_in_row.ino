// this shows some resistors in row and the voltage devision
// 
int measure_pin_one = A0; // measures the voltage at the 5V pin
int measure_pin_two = A1; // measures the divided voltage
int measure_pin_three = A2; // mesuares the ground 0V

void setup(){
  Serial.begin(9600);
  
  int raw_one = analogRead(measure_pin_one);
  int raw_two = analogRead(measure_pin_two);
  int raw_three = analogRead(measure_pin_three);
  
  Serial .print("Value at pin A0 is: ");
  Serial .println(raw_one);
  Serial.print("Voltage at pin A0 is: ");
  Serial.println((5.0 / 1023.0) *raw_one);
  Serial.println();

  Serial .print("Value at pin A1 is: ");
  Serial .println(raw_two);
  Serial.print("Voltage at pin A1 is: ");
  Serial.println((5.0 / 1023.0) *raw_two);
  Serial.println();  
  
  Serial .print("Value at pin A2 is: ");
  Serial .println(raw_three);
  Serial.print("Voltage at pin A2 is: ");
  Serial.println((5.0 / 1023.0) *raw_three);
  Serial.println();
}

void loop(){
}

