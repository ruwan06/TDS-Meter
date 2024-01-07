// Include the libraries we need
#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Data wire is plugged into port 2 on the Arduino
#define ONE_WIRE_BUS 2
LiquidCrystal_I2C lcd(0x27,16,2);

// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

// arrays to hold device address
DeviceAddress insideThermometer;

// int tdsValue, tempValue;
void setup(void)
{
  sensors.begin();
  lcd.init();                      
  lcd.backlight();
  if (!sensors.getAddress(insideThermometer, 0)) {}//Serial.println("Unable to find address for Device 0"); 

  lcd.setCursor(3, 0);
  lcd.print("TDS Meter");
}

void loop(void)
{ 
  sensors.requestTemperatures(); 
  int tempValue = sensors.getTempC(insideThermometer);
  int tdsValue = analogRead(A0);

  lcd.setCursor(0, 1);
  lcd.print("Temp:"+String(tempValue)+" TDS:"+String(tdsValue)+"   ");

  delay(100); // Add a delay to avoid rapid updates on the LCD
}
