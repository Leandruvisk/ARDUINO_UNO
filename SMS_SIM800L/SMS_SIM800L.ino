#include <SoftwareSerial.h>
#include "Adafruit_FONA.h"

#define FONA_RX 2
#define FONA_TX 3
#define FONA_RST 4

char replybuffer[255];

SoftwareSerial sim800l = SoftwareSerial(FONA_TX, FONA_RX);

Adafruit_FONA gsm = Adafruit_FONA(FONA_RST);

//uint8_t readline(char *buff, uint8_t maxbuff, uint16_t timeout = 0);

void setup() {
  Serial.begin(9600);
  sim800l.begin(9600); 
  if (! gsm.begin(sim800l)) {            
    Serial.println(F("Couldn't find SIM800L!"));
    while (1);
  }
  
   char sendto[21] = "92992021548";
   char message[141] = "oiii usando o SIM800L no arduino";
   gsm.sendSMS(sendto, message);
   delay(1000);
}

void loop() {}
