// RGB LED Color Cycle
// Author: [Jay]
// Description: This project cycles an RGB LED through Red, Green, Blue, and White colors.

int redPin = 9;    // Red pin of RGB LED
int greenPin = 10; // Green pin of RGB LED
int bluePin = 11;  // Blue pin of RGB LED

void setup() {
  // Set RGB pins as OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // RED color
  setColor(255, 0, 0); // Full red
  delay(1000);         // Wait 1 second

  // GREEN color
  setColor(0, 255, 0); // Full green
  delay(1000);         // Wait 1 second

  // BLUE color
  setColor(0, 0, 255); // Full blue
  delay(1000);         // Wait 1 second

  // WHITE color (Red + Green + Blue ON)
  setColor(255, 255, 255); // White
  delay(1000);             // Wait 1 second

  // Turn OFF LED
  setColor(0, 0, 0); // LED off
  delay(500);        // Wait half second
}

// Helper function to set RGB color
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
