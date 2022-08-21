#include "WiFi.h" 
void setup(){
  Serial.begin(115200);
}
void loop(){
WiFi.mode(WIFI_MODE_STA);
Serial.println(WiFi.macAddress());
delay(5000);
}
