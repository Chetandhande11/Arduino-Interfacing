/*** www.arduinopoint.com ***/
/*** Arduino LM35 Temperature Sensor Project with LCD ***/
// Define to which pin of the Arduino the output of the LM35 is connected:

#define sensorPin A0
#include<LiquidCrystal.h> //To include a library to write data on the 16*2 lcd device
LiquidCrystal lcd(7,8,9,10,11,12); //we have connected LCD pins to these pins on Arduino
byte degree[8] = 
{
0b00011,
0b00011,
0b00000,
0b00000,
0b00000,
0b00000,
0b00000,
0b00000
}; // These lines are to create a custom Degree sign 
void setup()// this will run only on either on start-up or when arduino is reset
{
lcd.begin(16,2);
lcd.createChar(1, degree); //we assign a number 1 to the degree sign created above
lcd.setCursor(2,0);
lcd.print("Arduino Point");
lcd.setCursor(3,1);
lcd.print("Thermometer");
delay(2000); // Keep the words on screen for two seconds
lcd.clear(); // clear the screen for writing anything else
// Begin serial communication at a baud rate of 9600:
Serial.begin(9600);
}
void loop()// this function will keep on running
{
// Get a reading from the temperature sensor:
int reading = analogRead(sensorPin); // analogRead will read the incoming data from the LM35 sensor

/*---------Temperature-------*/
// Convert the reading into voltage:
//This formula converts the ADC number 0-1023 to 0-5000mV (= 5V).
float voltage = reading * (5000 / 1024.0);
// Convert the voltage into the temperature in degree Celsius:
float temperatureC = voltage / 10;
float temperatureF=(temperatureC*1.8)+32; // Converting to Fahrenheit 
delay(10);

/*------Display Result in Serial Monitor------*/
// Print the temperature in Celsius into the Serial Monitor:
Serial.print("Temperature in Celsius    = ");
Serial.print(temperatureC);
Serial.print(" \xC2\xB0"); // shows degree symbol
Serial.println("C");

// Print the temperature in Celsius into the Serial Monitor:
Serial.print("Temperature in Fahrenheit = ");
Serial.print(temperatureF);
Serial.print(" \xC2\xB0"); // shows degree symbol
Serial.println("F");

Serial.print("\n");

/*------Display Result in LCD------*/
lcd.clear();
lcd.setCursor(2,0); // Setting Curser on First character of first line
lcd.print("Temperature"); // printing the word Temperature on the display
lcd.setCursor(0,1); // setting curser on First character on 2nd line
lcd.print(temperatureC);  // printing temperatureC value we got from the Sensor on the LCD
lcd.write(1); // Write the custom charecter we created (degree sign)
lcd.print("C");

lcd.setCursor(8,1); // setting curser on Second First character on 2nd line
lcd.print(temperatureF); // printing temperatureF value we got from the Sensor on the LCD
lcd.write(1); // Write the custom charecter we created (degree sign)
lcd.print("F");
delay(1000); // refresh every one second
}
