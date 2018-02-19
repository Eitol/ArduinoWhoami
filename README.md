# ArduinoWhoami
Returns the type of device for which the code is being compiled

Example: 

#include <Arduino.h>
#include <DeviceDetector.h>

void setup() {
    Serial.begin(9600);    
    // Detect the device type and print
    if (DeviceDetector::getDeviceType()==NodeMCU__){
        Serial.print("Hi! Im a NODEMCUUUU :)");
    }    
}

void loop() {
    
}