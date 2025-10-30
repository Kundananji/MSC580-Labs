#include <LiquidCrystal.h>
#include "DHT.h"
#define DHΤΡΙΝ 8
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
#define DHTTYPE DHT11 
DHT dht(DHTPΙΝ, DHTTYPE);

void setup() {
  lcd.begin(16, 2);
  dht.begin();
  lcd.print("Temp: Humidity:");
}

void loop()
{
  delay(500); 
  lcd.setCursor(0, 1);
  float h = dht.readHumidity();
  float f = dht.readTemperature(true); 
  
  if (isnan(h) || isnan(f))
  {
    lcd.print("ERROR");
    return; 
  }
  
  lcd.print(f); 
  lcd.setCursor(7, 1); 
  lcd.print(h);
}