#include <ESP8266WiFi.h>

#define WIFI_SSID "gift"
#define WIFI_PASSWORD ""

void setup() {
  Serial.begin(9600);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  while (WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(500);
  }

  Serial.println();
  Serial.println("Connected");
  Serial.println(WiFi.localIP());
}

void loop() {
}