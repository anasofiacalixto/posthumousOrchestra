/*
Code by Ana Sofia Calixto, for the piece Posthumous Orchestra
Vibration motor is triggered from deforestation data using Raspberry Pi Pico W
Based on code written by Ahmad Shamshiri on June 26th 2019 at 22:07 in Ajax, Ontario, Canada 
Original code is available at http://robojax.com/learn/arduino 
*/


// Define pin numbers for the vibration output pin and VCC
#define vibOutPin A0
#define VCC2 8

// Define the data array containing the percentage values
float data[] = {100, 99.61, 99.42, 99.39, 99.09, 99.01, 98.62, 98.32, 98.09, 97.87, 97.62, 97.45, 97.22, 97.01, 96.80, 96.64, 96.45, 96.27, 96.10, 95.91, 95.75, 95.56, 95.31};

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
  Serial.println("Current data used as input");
  
  // Print percentages
  for (int i = 0; i < sizeof(data) / sizeof(float); i++) {
    Serial.println(data[i]);
  }

}

void loop() {
  // Read index of data array based on time or any other criteria
  int index = millis() / 5000; // Length of data reading
  
  // Ensure index stays within data array
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
