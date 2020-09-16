#include <SPI.h> // RFID
#include <MFRC522.h> // RFID
#include "Arduino.h" // Audio
#include "SoftwareSerial.h" // Audio
#include "DFRobotDFPlayerMini.h" // Audio

#define SS_PIN 53 // SDA-Pin for RFID
#define RST_PIN 5 // RST-Pin for RFID

MFRC522 mfrc522(SS_PIN, RST_PIN);
SoftwareSerial mySoftwareSerial(10, 11);
DFRobotDFPlayerMini myDFPlayer;

void setup() {  
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  mySoftwareSerial.begin(9600);

  if (!myDFPlayer.begin(mySoftwareSerial)) {
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true);
  }

  myDFPlayer.volume(30); 
}

void loop() {
  
  if (!mfrc522.PICC_IsNewCardPresent()) {
    return;
  }
  if(!mfrc522.PICC_ReadCardSerial()) {
    return;
  }
  
  long code = 0;
  
  for(byte i = 0; i < mfrc522.uid.size; i++) {
    code = ((code+mfrc522.uid.uidByte[i])*10);
  }

  if(code == 1426860) {
    myDFPlayer.playMp3Folder(1);
  }
  if(code == 402660) {
    myDFPlayer.playMp3Folder(2);
  }

  mfrc522.PICC_HaltA();
}
