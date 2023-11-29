## Vem Mulher - Projeto Smart Cities

### 📝 Descrição do projeto
  A iniciativa 'Vem Mulher' tem como objetivo primordial promover a segurança das mulheres nos transportes públicos brasileiros, com especial ênfase nos ônibus, assim visando contribuir para a construção de cidades mais seguras e inteligentes.
  
  O principal propósito deste projeto é facilitar e agilizar as denúncias de assédio nesses meios, ao mesmo tempo em que assegura a discrição das mulheres durante o processo de denúncia. Para isso, utilizamos _tags discretas em formato de chaveiro pompom (ou pelúcia), que as vítimas podem aproximar do leitor do 'Vem Mulher'_. Essas tags contêm informações cruciais, como localização, número de identificação do ônibus, horário do incidente e o nome da vítima. Tais detalhes são imediatamente encaminhados aos órgãos competentes.

### 📚 Funcionalidades
* Detecção de RFID
* Cadastro de tags RFID
* Registro de localização ao acionar o RFID
* Conexão via Bluetooth para saída de dados

### 🔧 Tecnologias utilizadas
* Arduino Nano
* Módulo RFID MFRC522
* Tag RFID (embutida no chaveiro)
* Módulo bluetooth HC-06
* Aplicativo "Serial Bluetooth Terminal"

### 🚀 Rodando o projeto
1. Primeiro, é necessário ter a IDE do Arduino instalada em sua máquina, o link de download está disponível aqui: https://www.arduino.cc/en/software
2. Depois, para executar o projeto é preciso cloná-lo através do [repositório no Github](https://github.com/ticogafa/vem_mulher) ou fazer o download dos devidos arquivos disponíveis no repositório.
3. Também é  preciso ter instalado as seguintes bibliotecas para que o código funcione de forma correta:
* SoftwareSerial
* Wire
* MFRC522
* SPI
4. Após dar upload do código na placa Arduino, é necessário parear o seu dispositível móvel com o módulo Bluetooth (normalmente o nome exibido é "Bluetooth19" e a senha é: 1234) e acessar o aplicativo "Serial Bluetooth Terminal" para ter acesso à saída do Vem Mulher.

### 🤝 Colaboradores
Nós somos o G3 e somos compostos por:
---------------------------------------------
* CC-A ARTHUR DE ASSIS BORGES 
* DG-A AMANDA MARIA SANTANA DE LIMA 
* DG-A BRUNO HENRIQUE ROLIM NERY 
* CC-A CAIO CORREIA PACHECO NAPOLEÃO BELARMINO 
* CC-A CLARA MACHADO DE ARAÚJO 
* DG-A JÚLIA FURTADO DE MENDONÇA SILVA 
* CC-A JÚLIA SALES NOVAIS  
* DG-A MARIA GABRIELA ROQUE DA MATTA TABOSA DE SOUZA 
* CC-A MATHEUS VELAME PESSOA 
* CC-A RAFAEL ANDRADE LEITE BARROS 
* CC-A TIAGO GURGEL AMORIM FERREIRA DE ABREU 
----------------------------------------------
Projeto feito pela disciplina de Projetos 1 da Cesar School
