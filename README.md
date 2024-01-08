##Arduino TDS Meter with Temperature Display

## Overview
This Arduino project measures both temperature using a Dallas Temperature sensor and Total Dissolved Solids (TDS) using an analog sensor. The values are displayed on a 16x2 I2C LCD.

## Components
- Arduino board
- OneWire temperature sensor (DS18B20)
- TDS sensor (connected to analog pin A0)
- 16x2 I2C LCD display

## Libraries
- OneWire
- DallasTemperature
- Wire
- LiquidCrystal_I2C

## Pin Configuration
- OneWire temperature sensor: Connected to port 2
- TDS sensor: Connected to analog pin A0
- I2C LCD: Address 0x27, 16 columns, 2 rows

## Setup
1. Connect the sensors and LCD according to the specified pin configuration.
2. Upload the provided Arduino code to your Arduino board.
3. Power up the Arduino.

## Operation
The LCD will display the current temperature in Celsius from the DS18B20 sensor and the TDS value from the analog sensor. The values are updated every 100 milliseconds to avoid rapid updates on the LCD.

## Notes
- Make sure to install the required libraries before uploading the code to your Arduino.
- Adjust the pin configurations in the code if your hardware setup differs.

Feel free to modify the code and hardware setup according to your requirements.
