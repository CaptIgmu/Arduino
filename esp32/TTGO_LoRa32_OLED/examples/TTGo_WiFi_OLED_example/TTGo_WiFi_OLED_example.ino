/*
** Example TTGo Wifi-OLED sketch
** From WordBot  https://robotzero.one/heltec-wifi-kit-32/
** Could not get the TTGo OLED to work until I found this!
** RMB 11-28-2017
*/

#include "WiFi.h"
#include "U8x8lib.h"

//#include <U8g2lib.h>   // https://github.com/olikraus/U8g2_Arduino

#include "FlashLED.h"

// I2C OLED Display works with SSD1306 driver
#define OLED_SDA 4
#define OLED_SCL 15
#define OLED_RST 16

/* Pick One. Hardware I2C does NOT work!
* TTGo boards similar to Heltec boards, LED_BUILTIN = 2 instead of pin 25
* Some OLED displays don't handle ACK correctly so SW I2C works better. Thank you Olikraus!
* TTGo OLED has pin 16 reset unlike other OLED displays
*/

// UNCOMMENT one of the constructor lines below
U8X8_SSD1306_128X64_NONAME_SW_I2C u8x8(/* clock=*/ OLED_SCL, /* data=*/ OLED_SDA, /* reset=*/ OLED_RST); // Unbuffered, basic graphics, software I2C
//U8G2_SSD1306_128X64_NONAME_1_SW_I2C Display(U8G2_R0, /* clock=*/ OLED_SCL, /* data=*/ OLED_SDA, /* reset=*/ OLED_RST); // Page buffer, SW I2C
//U8G2_SSD1306_128X64_NONAME_F_SW_I2C Display(U8G2_R0, /* clock=*/ OLED_SCL, /* data=*/ OLED_SDA, /* reset=*/ OLED_RST); // Full framebuffer, SW I2C

FlashLED flashBLUE("TTGo ESP32 LoRa-OLED");  // interrupt driven flashing "Alive" LED

void setup()
{
  // Set WiFi to station mode and disconnect from an AP if it was previously connected
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
  
  Serial.begin(115200);

  u8x8.begin();
  u8x8.setFont(u8x8_font_chroma48medium8_r);

  Serial.println("TTGo WiFi-OLED Test!");
  flashBLUE.begin();
}

static void doSomeWork()
{
  int n = WiFi.scanNetworks();

  if (n == 0) {
    u8x8.clearDisplay();
    u8x8.drawString(0, 0, "Searching networks.");
    Serial.println("Searching networks . . .");
  } else {
    u8x8.clearDisplay();
    u8x8.drawString(0, 0, "Networks found: ");
    Serial.println("Networks found:");  
    for (int i = 0; i < n; ++i) {
      // Print SSID for each network found
      char currentSSID[64];
      WiFi.SSID(i).toCharArray(currentSSID, 64);
      u8x8.drawString(0, i + 1, currentSSID);
      Serial.println(currentSSID);
    }
    
  }
  // Wait a bit before scanning again
  delay(5000);
}

void loop()
{
  doSomeWork();
}

