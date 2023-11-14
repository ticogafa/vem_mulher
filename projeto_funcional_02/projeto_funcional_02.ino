#include <Wire.h>
#include <MFRC522.h>
#include<SoftwareSerial.h>
#include<TinyGPS.h>
#include <SPI.h>



#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);
SoftwareSerial SerialGPS(7, 8);
TinyGPS GPS;
SoftwareSerial bluetooth(4, 3); //TX, RX (Bluetooth)



const int pinoLedVermelho = 2;
float lat, lon, vel;
unsigned long data, hora;
unsigned short sat;

void setup(){

  bluetooth.begin(9600);
  Wire.begin();
  SPI.begin();
  rfid.PCD_Init();

  SerialGPS.begin(9600);
  Serial.begin(9600);
 
  Serial.println("Buscando satelites...");
  
  pinMode(pinoLedVermelho, OUTPUT);
  
  digitalWrite(pinoLedVermelho, LOW);
}

void loop() {
  
  leituraRfid();
  while (SerialGPS.available()) {
    if (GPS.encode(SerialGPS.read())) {
 
      //Hora e data
      GPS.get_datetime(&data, &hora);
      GPS.f_get_position(&lat, &lon);
      vel = GPS.f_speed_kmph();
      sat = GPS.satellites();
    }
  }
}

void leituraRfid(){

  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial())
    return;

  String strID = ""; 
  for (byte i = 0; i < 4; i++) {
    strID +=
    (rfid.uid.uidByte[i] < 0x10 ? "0" : "") +
    String(rfid.uid.uidByte[i], HEX) +
    (i!=3 ? ":" : "");
  }
  strID.toUpperCase();

  if (strID.indexOf("27:41:AA:AB") >= 0) {
  }else{
    bluetooth.println("ALERTA ACIONADO!");
    bluetooth.print("LINHA 513 - CÓRREGO DA AREIA");
    bluetooth.println("ROTA EM TEMPO REAL: ");
    bluetooth.print("https://moovitapp.com/recife-1662/lines/513/85381377/6310148/pt-br?ref=2&poiType=line&abTest=Control_Mini_splash_all_click_to_web_app_LINE_14383&customerId=4908&af_sub8=%2Findex%2Fpt-br%2Ftransporte_p%25C3%25BAblico-line-513-Recife-1662-3115090-85381377-0&af_sub9=Change%20Direction");
    digitalWrite(pinoLedVermelho, HIGH);
    delay(3000);
    digitalWrite(pinoLedVermelho, LOW);
    bluetooth.print("--");
    bluetooth.print((hora/ 1000000) - 3);
    bluetooth.print(":");
    bluetooth.print((hora % 1000000) / 10000);
    bluetooth.print(":");
    bluetooth.print((hora % 10000) / 100);
    bluetooth.print(" -- ");

    bluetooth.print(data / 10000);
    bluetooth.print("/");
    bluetooth.print((data % 10000) / 100);
    bluetooth.print("/");
    bluetooth.print(data % 100);
    bluetooth.println("--");
    bluetooth.print("Latitude: ");
    bluetooth.println(lat, 6);
    bluetooth.print("Longitude: ");
    bluetooth.println(lon, 6);
    bluetooth.print("http://maps.google.com/maps?q=");
    bluetooth.print(lat, 6);
    bluetooth.print(",");
    bluetooth.print(lon, 6);
    bluetooth.println("");
    bluetooth.println("------------------------------------------------------------");

  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
  }
}