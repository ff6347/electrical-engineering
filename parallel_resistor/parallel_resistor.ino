/*
 This sketch shows some resistor in an parallel circuit
 lets use Ohms law to calculate/measure the current that flows
 
 Run the sketch and look at the serial monitor
 after that you can remove one of the resistors and set R to 100
 Then run the sketch again.
 @author: fabiantheblind
 
 */
int measure_pin = A0;

void setup(){
  Serial.begin(9600);
  int raw_value = analogRead(measure_pin);
  double R1 = 100; // ohm
  double R2 = 100; // ohm

  double U = (5.0 / 1023.0) * raw_value; // volt
  // lets calculate the current with ohms law
  // I = U/R
  // we have two resistors in our sketch in parallel
  // that means the resistance is devided
  // R = 1/ (1/R1 + 1/R2)
  double R = 100;//1/(1/R1 + 1/R2); // whole resistor value

  double I = U/R;
  Serial.print("The voltage is: ");
  Serial.print(U, 3);
  Serial.println(" V");
  Serial.print("The resistance is: ");
  Serial.print(R,3);
  Serial.println(" Ohm");
  Serial.print("The current is: ");
  Serial.print(I,5);
  Serial.println(" A");

  Serial.println(" Now remove one of the resistors and set the R to 100. Then upload the sketch again.");
}
void loop(){

}



