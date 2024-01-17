// Include necessary libraries
#include <Arduino.h>

// Define the analog pin to which the PCB output is connected
const int analogPin = A5;

void setup() {
  // Initialize serial communication
  Serial.begin(115200);

  // Configure the analog pin as an input
  pinMode(analogPin, INPUT);
}

void loop() {
  // Read the analog value from the specified pin
  int adcValue = analogRead(analogPin);

  // Convert the ADC value to voltage
  float voltage = (adcValue / 4095.0) * 3.3;

  // Print the voltage reading to the serial monitor
  Serial.print("Voltage: ");
  Serial.print(voltage, 2); // Print with 2 decimal places
  Serial.println(" V");

  // Add a delay to prevent rapid serial output (adjust as needed)
  delay(1000); // Delay for 1 second
}
