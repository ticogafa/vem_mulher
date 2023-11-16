## Vem Mulher - Projeto Smart Cities

### 📝 Descrição do projeto
Nosso projeto visa a promoção da segurança da mulher em transporte público no Brasil, com destaque em ônibus, assim contribuindo para tornar a cidade mais inteligente através de denúncias mais práticas e rápidas de casos de 
assédio nesses meios.

O objetivo desse projeto é prezar pela discrição da mulher ao realizar a denúncia, que são feitas através de _tags "disfarçadas" de chaveiro pompom (ou pelúcia)_, no qual a vítima iria _aproximar ao leitor do Vem Mulher_, e assim, informações como a localização e número de identificação do ônibus, horário do ocorrido e nome da vítima seriam enviadas de forma imediata para os órgãos competentes.

### 📚 Funcionalidades
* Detecção de RFID
* Registro de localização e hora ao acionar o RFID
* Conexão via Bluetooth para saída de dados
* Contador

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


