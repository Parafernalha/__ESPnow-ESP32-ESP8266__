#include <ESP8266WiFi.h>
void setup(){
  Serial.begin(115200);
  Serial.println();
}
void loop(){
  Serial.print("ESP8266 Board MAC Address:  ");
  Serial.println(WiFi.macAddress());
  delay(5000);
}
