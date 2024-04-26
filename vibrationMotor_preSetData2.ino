/*
Code by Ana Sofia Calixto, for the piece Posthumous Orchestra
Vibration motor is triggered from deforestation data using Arduino Mega
Based on code written by Ahmad Shamshiri on June 26th 2019 at 22:07 in Ajax, Ontario, Canada 
Original code is available at http://robojax.com/learn/arduino 
*/

// Define pin numbers for the vibration output pin and VCC
#define vibOutPin 6
#define VCC2 8

// Define the data array containing the percentage values
float data[] = {100, 99.57, 99.08, 99.04, 98.48, 98.32, 97.98, 97.17, 96.97, 95.95, 95.23, 94.59, 93.60, 92.82, 91.99, 91.33, 90.53, 89.92, 89.17, 88.39, 87.75, 87.05, 86.10};


void setup() {
  // Set pin modes for output
  pinMode(vibOutPin, OUTPUT);
  pinMode(VCC2, OUTPUT);
  
  // Provide 5V for vibration motor
  digitalWrite(VCC2, HIGH);
  
  // Start serial communication
  Serial.begin(9600);
  Serial.println("Vibration motor test");

  // Print information about the current data used as input
  Serial.println("Current Data Used as Input");
  
  // Print percentages
  for (int i = 0; i < sizeof(data) / sizeof(float); i++) {
    Serial.println(data[i]);
  }

}

void loop() {
  // Read index of data array based on time or any other criteria
  int index = millis() / 5000; // Length of data reading
  
  // Ensure index stays within the bounds of data array
  index = constrain(index, 0, sizeof(data) / sizeof(data[0]) - 1);

  // Calculate the vibration intensity based on the percentage values
  int vibrationIntensity = map(data[index], 100, 95.31, 180, 255);

  // Set vibration intensity
  analogWrite(vibOutPin, vibrationIntensity);

  // Print the current data value being read
  Serial.print("Reading data: ");
  Serial.println(data[index]);

  // Delay 
  delay(200);
}
