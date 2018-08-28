# Resources for TTGO LoRa32 OLED Board V1.x

These interesting boards are ESP32-DOWDQ6 Revision 1 based, 4MByte Flash with LoRa 868/915 MHz radio and 0.96" 128x64 SSD1306 monochrome OLED display. The key to getting the OLED display running is using software I2C and I would recommend the U8g2/U8x8 graphics library. See the examples. With [PR #1663](https://github.com/espressif/arduino-esp32/pull/1663), this board description has been merged into  espressif/arduino-esp32 variants and boards.txt. To setup in Arduino:

#### 1. From within the Arduino IDE, select the Tools menu --> Board --> pick the _TTGO LoRa32-OLED V1_  item from the ESP32 Arduino choices. Now adjust the Flash Frequency:, Upload Speed:, Core Debug Level:, and Port: as needed.

#### 2. From within the Arduino IDE, select the Sketch menu --> Include Library --> Manage Libraries to install the U8g2 and LoRa libraries.

These boards continue to evolve with re-designs of wifi/LoRa radio sections, added features, increasing prices and changes in pinouts!

![image](/images/TTGO_LoRa32_Versions.jpg)

## References
[Semtech SX1276 LoRa radio chip info](https://www.semtech.com/products/wireless-rf/lora-transceivers/SX1276)

[TTGO BBS](http://ttgobbs.com/)

[LilyGO TTGO LoRa32 OLED board info](http://www.lilygo.cn/down_view.aspx?TypeId=11&Id=78&Fid=t14:11:14)

[LilyGO resources on GitHub V1.x](https://github.com/LilyGO/LORA-ESP32-OLED)

[LilyGO resources on GitHub V2.0](https://github.com/LilyGO/TTGO-LORA32-V2.0)

[LilyGO resources on GitHub V2.1](https://github.com/LilyGO/TTGO-LoRa32-V2.1)

[This article about a similar Heltec board is very helpful](https://robotzero.one/heltec-wifi-kit-32/)

[LoRa radio library by Sandeep Mistry](https://github.com/sandeepmistry/arduino-LoRa)

[U8g2/U8x8 display library by Olikraus](https://github.com/olikraus/U8g2_Arduino)

[Espressif ESP32 Arduino site](https://github.com/espressif/arduino-esp32)

[Andreas Spiess Evaluation of Heltec and TTGO LoRa32 boards](https://www.youtube.com/watch?v=CJNq2I_PDHQ)

[Range test and example for V1.x board by 1nformatica](https://www.youtube.com/watch?v=2Q4O88hmjzE)

[3D printed case for V1.x board on Thingiverse](https://www.thingiverse.com/thing:2670713)

[Big ESP32 + SX127x Topic Part 2  _The Things Network_](https://www.thethingsnetwork.org/forum/t/big-esp32-sx127x-topic-part-2/11973)

[Sloeber IDE for Arduino Development on Eclipse](http://eclipse.baeyens.it/index.shtml)

[Set up ESP32 JTAG-Debugging on Sloeber for Windows](https://onedrive.live.com/view.aspx?resid=4EF34D0924CECD08!105684&ithint=file%2cdocx&app=Word&authkey=!ACWnebcSvI14a0w)

[Affordable TUMPA JTAG Interface Board from DIYGADGET](https://www.diygadget.com/jtag-cables-and-microcontroller-programmers/114-tiao-usb-multi-protocol-adapter-jtag-spi-i2c-serial.html)

[TTGO LORA32 V1.x boards available from FaceToFace on AliExpress](https://www.aliexpress.com/item/2pcs-of-TTGO-LORA32-868-915Mhz-SX1276-ESP32-Oled-display-Bluetooth-WIFI-Lora-development-board/32841743946.html?spm=2114.search0104.3.3.42031d17xNO5cM&ws_ab_test=searchweb0_0,searchweb201602_4_10152_10065_10151_10344_10068_10130_10342_10547_10343_10546_10340_10341_10548_5724715_315_10545_10696_10084_531_5724015_10083_10618_5724315_10307_5724215_5724115_10059_100031_5725015_10103_5724915_10624_10623_10622_10621_10620,searchweb201603_2,ppcSwitch_5&algo_expid=0e6b2c05-6981-4857-b225-8243e37e60b5-0&algo_pvid=0e6b2c05-6981-4857-b225-8243e37e60b5&priceBeautifyAB=0)

[TTGO LORA32 V2.0 boards available from LilyGO on AliExpress](https://www.aliexpress.com/item/TTGO-LORA32-V2-0-433-868-915Mhz-ESP32-LoRa-OLED-0-96-Inch-SD-Card-Blue/32846302183.html?spm=2114.10010108.1000023.12.4a1b577f9Lnans)

[TTGO LORA32 V2.1 boards available from LilyGO on AliExpress](https://www.aliexpress.com/item/TTGO-LoRa32-V2-1-1-6-version-433-868-915Mhz-ESP32-LoRa-OLED-0-96-Inch/32872078587.html?spm=2114.search0104.3.9.51041d17H7ecMH&ws_ab_test=searchweb0_0%2Csearchweb201602_4_10152_10151_10065_10344_10068_10130_5722815_10324_10342_10547_10325_10343_10546_10340_5722915_10548_10341_10545_5722615_10696_10084_10083_10618_10307_5722715_10059_100031_10103_10624_10623_10622_5722515_10621_10620%2Csearchweb201603_55%2CppcSwitch_5&algo_expid=ef46762f-4c63-43fe-955d-d161e218adf3-1&algo_pvid=ef46762f-4c63-43fe-955d-d161e218adf3&priceBeautifyAB=0)
