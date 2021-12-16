/*********************************************************************************\
* Filename: mac_address_finder.ino
* Projekt  : MAC address finder for the ESP32
* Hardware : Espressif Systems ESP32
*
* Description:
* This code reads out the MAC address of the ESP32
* and writes it to the serial monitor.
*
* Date:       Author:           Version
* 16.12.2021  Thomas S. Perri   V1.0
\*********************************************************************************/

#include "WiFi.h"
 
void setup(){
  Serial.begin(115200);
 
  WiFi.mode(WIFI_MODE_STA);
 
  Serial.println(WiFi.macAddress());
}
 
void loop(){}
