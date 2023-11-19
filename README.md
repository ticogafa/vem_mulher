## Vem Mulher - Projeto Smart Cities

### 📝 Descrição do projeto
Nossa iniciativa tem como foco primordial promover a segurança das mulheres nos transportes públicos brasileiros, com especial atenção aos ônibus, contribuindo assim para a construção de cidades mais seguras e inteligentes. Buscamos facilitar e agilizar as denúncias de assédio nesses meios.

O principal objetivo desse projeto é assegurar a discrição das mulheres ao realizarem suas denúncias. Para isso, _utilizamos tags discretas em formato de chaveiro pompom (ou pelúcia), que as vítimas podem aproximar do leitor do 'Vem Mulher'_. Essas tags contêm informações como localização, número de identificação do ônibus, horário do incidente e o nome da vítima. Tais detalhes são imediatamente encaminhados aos órgãos competentes."
### 📚 Funcionalidades
* Detecção de RFID
* Registro de localização e hora ao acionar o RFID
* Conexão via Bluetooth para saída de dados
* Contador de ocorrências

### 🔧 Tecnologias utilizadas
* Arduino Nano
* Módulo RFID MFRC522
* Tag RFID (imbutido no chaveiro)
* Módulo bluetooth HC-06
* Módulo GPS Neo-6m V2


### 🚀 Rodando o projeto
1. Primeiro, é necessário ter a IDE do Arduino instalada em sua máquina, o link de download está disponível aqui: https://www.arduino.cc/en/software
2. Depois, para executar o projeto é preciso cloná-lo através do [repositório no Github](https://github.com/ticogafa/vem_mulher) ou fazer o download dos devidos arquivos disponíveis no repositório.
3. Também é  preciso ter instalado as seguintes bibliotecas para que o código funcione de forma correta:
* SoftwareSerial
* Wire
* MFRC522
* TinyGPS
* SPI
4. Após dar upload do código na placa Arduino, é necessário parear o seu dispositível móvel com o módulo Bluetooth (normalmente o nome exibido é "Bluetooth19") e acessar o aplicativo "Serial Bluetooth Terminal" para ter acesso à saída do Vem Mulher.

### 🤝 Colaboradores
CC-A ARTHUR DE ASSIS BORGES 
DG-A AMANDA 
DG-A BRUNO HENRIQUE ROLIM NERY 
CC-A CAIO CORREIA PACHECO NAPOLEÃO BELARMINO 
CC-A CLARA MACHADO DE ARAÚJO 
DG-A JÚLIA FURTADO DE MENDONÇA SILVA 
CC-A JÚLIA SALES NOVAIS  
DG-A MARIA GABRIELA ROQUE DA MATTA TABOSA DE SOUZA 
CC-A MATHEUS VELAME PESSOA 
CC-A RAFAEL ANDRADE LEITE BARROS 
CC-A TIAGO GURGEL AMORIM FERREIRA DE ABREU 
----------------------------------------------
Projeto feito pela disciplina de Projetos 1 da Cesar School
