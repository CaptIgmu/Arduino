# Resources for TTGO LoRa32 OLED Board V1.x

These interesting boards are ESP32-DOWDQ6 Revision 1 based, 4MByte Flash with LoRa 868/915 MHz radio and 0.96" 128x64 SSD1306 monochrome OLED display. The key to getting the OLED display running is using software I2C and I would recommend the U8g2/U8x8 graphics library. See the examples. Until TTGO updates the Espressif ESP32 Arduino site, you will need to do the following to use this board in Arduino:

#### 1. From the variants folder here, copy and paste the ttgo_lora_32 folder into your system variants folder, usually located at ../Arduino/hardware/expressif/esp32/variants. You now have access to your customized pins_arduino.h file for the TTGO board.

#### 2. In a text editor, copy and paste the contents of the boards.txt file here into the _Top_ or _Bottom_ of the system boards.txt file and save it, usually located at ../Arduino/hardware/expressif/esp32/. Remember, you are trying to _add_ a new entry to a long list of board types.

#### 3. From within the Arduino IDE, select the Tools menu --> Board --> pick the _TtGo ESP32 LoRa-OLED_ item from the ESP32 Arduino choices. Now adjust the Flash Frequency:, Upload Speed:, Core Debug Level:, and Port: as needed.

#### 4. From within the Arduino IDE, select the Sketch menu --> Include Library --> Manage Libraries to install the U8g2 and LoRa libraries.

OK. You should be ready to roll and explore these powerful and affordable boards. I hope I saved you some time!

Update: The version 2.0 board is ESP32-PICO-D4 based with CP2104 USB, MicroSD card slot and battery power switch. The Wi-Fi and LoRa layouts have also been redesigned. This looks much improved but the pinouts have changed!

## References
[Semtech SX1276 LoRa radio chip info](http://www.semtech.com/apps/product.php?pn=SX1276)

[Lily GO TTGO LoRa32 OLED board info](http://www.lilygo.cn/down_view.aspx?TypeId=11&Id=78&Fid=t14:11:14)

[Lily GO resources on GitHub V1.x](https://github.com/LilyGO/LORA-ESP32-OLED)

[Lily GO resources on GitHub V2.0](https://github.com/LilyGO/TTGO-LORA32-V2.0)

[This article about a similar Heltec board is very helpful](https://robotzero.one/heltec-wifi-kit-32/)

[LoRa radio library by Sandeep Mistry](https://github.com/sandeepmistry/arduino-LoRa)

[U8g2/U8x8 display library by Olikraus](https://github.com/olikraus/U8g2_Arduino)

[Espressif ESP32 Arduino site](https://github.com/espressif/arduino-esp32)

[Andreas Spiess Evaluation of Heltec and TTGO LoRa32 boards](https://www.youtube.com/watch?v=CJNq2I_PDHQ)

[Range test and example for V1.x board by 1nformatica](https://www.youtube.com/watch?v=2Q4O88hmjzE)

[3D printed case for V1.x board on Thingiverse](https://www.thingiverse.com/thing:2670713)

[TTGO LORA32 V1.x boards available from Lily GO on AliExpress](https://www.aliexpress.com/item/2pcs-TTGO-LORA32-868-915Mhz-ESP32-LoRa-OLED-0-96-Inch-Blue-Display-Bluetooth-WIFI-ESP/32839249834.html?spm=a2g0s.8937460.0.0.CRJucg)

[TTGO LORA32 V2.0 boards available from Lily GO on AliExpress](https://www.aliexpress.com/item/2-Pcs-TTGO-LORA32-V2-0-868-433Mhz-ESP32-LoRa-OLED-0-96-Inch-SD-Card/32847443952.html?spm=2114.10010108.100009.2.3a4b8355oCeusz&traffic_analysisId=recommend_2037_null_null_null&scm=1007.13482.91320.0&pvid=bc14c023-1a9c-4a74-af46-7f5fc4ea2036&tpp=1)
