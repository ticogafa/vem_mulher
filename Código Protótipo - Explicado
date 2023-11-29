#include <Wire.h> //Inclusão da biblioteca WIRE
#include <MFRC522.h> //Inclusão da biblioteca MFRC522
#include<SoftwareSerial.h> //Inclusão da biblioteca SoftwareSerial
#include <SPI.h> //Inclusão da biblioteca SPI

#define SS_PIN 10 //Pino SDA do leitor RFID
#define RST_PIN 9 //Pino RST do leitor RFID

MFRC522 rfid(SS_PIN, RST_PIN); //Passagem de parâmetros referente aos pinos
SoftwareSerial bluetooth(3, 4); //Porta TX do bluetooth (3), Porta RX do bluetooth (4)

const int pinoLedVerde = 7; //Anodo do LED conectado na porta 7

void setup(){

  bluetooth.begin(9600); //Inicializa a serial do bluetooth
  Wire.begin(); //Inicializa a biblioteca WIRE
  SPI.begin(); //Inicializa o barramento SPI
  rfid.PCD_Init(); //Inicializa a biblioteca MFRC522

  pinMode(pinoLedVerde, OUTPUT); //Definindo o pino como uma saida

  digitalWrite(pinoLedVerde, LOW); //A LED inicia desligado
}

void loop() {

  leituraRfid(); //Chama a função responsável pela a validação da TAG RFID

}

void leituraRfid(){ //Função de validação da TAG RFID

  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) //Verifica se o cartão presente no leitor é diferente do último cartão lido
    return; //Caso não seja diferente do último cartão, retorna para ler novamente

  String strID = ""; //Início de código responsável por gerar a TAG RFID lida
  for (byte i = 0; i < 4; i++) {
    strID +=
    (rfid.uid.uidByte[i] < 0x10 ? "0" : "") +
    String(rfid.uid.uidByte[i], HEX) +
    (i!=3 ? ":" : "");
  }
  strID.toUpperCase(); //Fim do bloco de código responsável por gerar a TAG RFID lida

  if (strID.indexOf("55:8D:05:AD") >= 0) { //Endereço UID do cartão que foi cadastrado
  bluetooth.println("ALERTA ACIONADO!"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Nome: Maria Gabriela Roque da Matta Tabosa de Souza"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("CPF: 332.200.116-44"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Telefone: (81) 98623-7163"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Ônibus: Corrego da Areia 513"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Link da localização do ônibus: https://maps.app.goo.gl/oKe4HnbpwKjJpG3Y9"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("------------------------------------------------------------"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  digitalWrite(pinoLedVerde, HIGH); //Liga a led verde
  delay(3000); //A led fica acesa por 3 segundos
  digitalWrite(pinoLedVerde, LOW); //Após 3 segundos, a led irá apagar

  rfid.PICC_HaltA(); //Parada da leitura do cartão
  rfid.PCD_StopCrypto1(); //Parada da criptografia no PCD
  }

  else if (strID.indexOf("A1:FB:27:1A") >= 0) { //Endereço UID do cartão que foi cadastrado
  bluetooth.println("ALERTA ACIONADO!"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Nome: Clara Machado de Araújo"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("CPF: 746.102.001-38"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Telefone: (81) 93421-2502"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Ônibus: Corrego da Areia 513"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Link da localização do ônibus: https://maps.app.goo.gl/oKe4HnbpwKjJpG3Y9"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("------------------------------------------------------------"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  digitalWrite(pinoLedVerde, HIGH); //Liga a led verde
  delay(3000); //A led fica acesa por 3 segundos
  digitalWrite(pinoLedVerde, LOW); //Após 3 segundos, a led irá apagar

  rfid.PICC_HaltA(); //Parada da leitura do cartão
  rfid.PCD_StopCrypto1(); //Parada da criptografia no PCD
  }
  else if (strID.indexOf("F0:F1:BE:1A") >= 0) { //Endereço UID do cartão que foi cadastrado
  bluetooth.println("ALERTA ACIONADO!"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Nome: Amanda Maria Santana de Lima"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("CPF: 823.193.012-10"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Telefone: (81) 96190-8654"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Ônibus: Corrego da Areia 513"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("Link da localização do ônibus: https://maps.app.goo.gl/oKe4HnbpwKjJpG3Y9"); //Mensagem que irá aparecer no terminal do celular, via bluetooth
  bluetooth.println("------------------------------------------------------------");
  digitalWrite(pinoLedVerde, HIGH); //Liga a led verde
  delay(3000); //A led fica acesa por 3 segundos
  digitalWrite(pinoLedVerde, LOW); //Após 3 segundos, a led irá apagar

  rfid.PICC_HaltA(); //Parada da leitura do cartão
  rfid.PCD_StopCrypto1(); //Parada da criptografia no PCD
  }
}
