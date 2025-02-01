#define BLYNK_TEMPLATE_ID "TMPL6zbnw0ACC"
#define BLYNK_TEMPLATE_NAME "Temperature Monitor Using DS18B20 Sensor"
#define BLYNK_AUTH_TOKEN "**************"


#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp8266.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define DS18B20 4    //Connect to GPIO2 pin
#define PUMP_SWITCH 16 //D0
#define VALVE_SWITCH 5 //D1

OneWire ourWire(DS18B20);
DallasTemperature sensor(&ourWire);

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "AquaLift";  // Enter your wifi name
char pass[] = "********";  // Enter your wifi password

BlynkTimer timer;

void sendSensor()
{
  // Request temperature to all devices on the data line
  sensor.requestTemperatures(); 
  
  Serial.print("Celsius temperature: ");
  //We can connect more than one IC on the same data wire. 0 refers to the first IC on the wire
  Serial.print(sensor.getTempCByIndex(0)); 
  Serial.print(" - Fahrenheit temperature: ");
  Serial.println(sensor.getTempFByIndex(0));
  int tempC=sensor.getTempCByIndex(0);
  int tempF=sensor.getTempFByIndex(0);
  delay(1000);
  
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
    Blynk.virtualWrite(V0, tempC);
    Blynk.virtualWrite(V1, tempF);
    delay(500);
}

BLYNK_WRITE(V2) {
  // V2 是在 Blynk 应用中设置的按钮控件虚拟引脚
  int pinValue = param.asInt(); // 获取按钮的状态（0 或 1）
  
  if(pinValue == 1) {
    digitalWrite(PUMP_SWITCH, HIGH);  // 打开pump
    Serial.println("Pump ON");    // 在串口输出状态
  } else {
    digitalWrite(PUMP_SWITCH, LOW);   // 关闭pump
    Serial.println("Pump Off");    // 在串口输出状态
  }
}

BLYNK_WRITE(V3) {
  // V3 是在 Blynk 应用中设置的按钮控件虚拟引脚
  int pinValue = param.asInt(); // 获取按钮的状态（0 或 1）
  
  if(pinValue == 1) {
    digitalWrite(VALVE_SWITCH, HIGH);  // 打开Valve
    Serial.println("Valve ON");    // 在串口输出状态
  } else {
    digitalWrite(VALVE_SWITCH, LOW);   // 关闭Valve
    Serial.println("Valve Off");    // 在串口输出状态
  }
}


void setup()
{   
  pinMode(PUMP_SWITCH, OUTPUT);
  pinMode(VALVE_SWITCH, OUTPUT);

  digitalWrite(PUMP_SWITCH, LOW);
  digitalWrite(VALVE_SWITCH, LOW);

  Serial.begin(9600);
  sensor.begin();

  Blynk.begin(auth, ssid, pass);
  timer.setInterval(100L, sendSensor);
 
}

void loop()
{
  Blynk.run();
  timer.run();
 }

