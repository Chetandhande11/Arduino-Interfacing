#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define Sober 290   // Define max value that we consider sober
#define Drunk 400   // Define min value that we consider drunk
#define MQ3 A0
#define RelayPin 6  // Pin connected to the relay
#define Buzzerpin 7   //  pin connected to the buzzer

LiquidCrystal_I2C lcd(0x27, 16, 2); // Address 0x27, 16 columns, 2 rows

int sensorValue;  // Variable to store sensor value

void setup() {
  Serial.begin(9600); // Sets the serial port to 9600

  pinMode(RelayPin, OUTPUT);        // Set relay pin as output 
  pinMode(Buzzerpin, OUTPUT);       // Set Buzzer pin as output

  lcd.init(); // Initialize the LCD
  lcd.backlight(); // Turn on the backlight

  lcd.print("MQ3 System Start!");
  delay(3000); // Allow the MQ3 to warm up
}

void loop() {
  digitalWrite(Buzzerpin, LOW);
  sensorValue = analogRead(MQ3); // Read analog input pin A0

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Sensor Value:");
  lcd.print(sensorValue);

  // Determine the status
  if (sensorValue < Sober) {
    lcd.setCursor(0, 1);
    digitalWrite(RelayPin, HIGH);
    lcd.print("Status: Sober");
  } else if (sensorValue >= Sober && sensorValue < Drunk) {
    lcd.setCursor(0, 1);
    digitalWrite(RelayPin, HIGH);
    lcd.print("Status:Leagle Drink");
  } else {
    digitalWrite(Buzzerpin, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Status: DRUNK");
    digitalWrite(RelayPin, LOW); // Turn on relay when drunk
  }


  unsigned int outputValue = map(sensorValue, 0, 1023, 0, 255);

  delay(1000); // Wait 5s for next reading
}
