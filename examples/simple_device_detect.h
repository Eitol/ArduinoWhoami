#include <Arduino.h>
#include <ArduinoWhoami.h>

void setup() {
    Serial.begin(9600);    
    // Detect the device type and print
    if (ArduinoWhoami::getDeviceType()==NodeMCU__){
        Serial.print("Hi! I am a little NODEMCUUUU :)");
    }    
}

void loop() {
    
}
