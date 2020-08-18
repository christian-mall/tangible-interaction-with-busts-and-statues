#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 53 //SDA-Pin
#define RST_PIN 5 //RST-Pin
MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
}

void loop() {
  if(!mfrc522.PICC_IsNewCardPresent()) {
    return;
  }
  if(!mfrc522.PICC_ReadCardSerial()) {
    return;
  }
  long code=0;
  for(byte i = 0; i < mfrc522.uid.size; i++) {
    code=((code+mfrc522.uid.uidByte[i])*10);
  }
  Serial.print("The code is:");
  Serial.println(code);
}
