SHELL := /bin/bash

limpar:
	rm -riv *.o

##### TARGET1: FACULDADE #####
criar_pastas: pastas.o
	gcc pastas.o -o pastasFACUL
	./pastasFACUL
	rm pastas.o && rm pastasFACUL

pastas.o: pastas.c
	gcc -c pastas.c

##### TARGET2: FACULDADE_EXTRA #####
criar_pastas_extras: subpasta.o
	gcc subpasta.o -o subpasta
	./subpasta
	rm subpasta.o && rm subpasta

subpasta.o: subpasta.c
	gcc -c subpasta.c

##### TARGET3: PROGRAMA EM C #####
executarC: main.o
	gcc main.o -o atividadeC
	./atividadeC
	rm main.o && rm atividadeC

main.o: main.c
	gcc -c main.c

#EXECUTAR VIA TERMINAL LINUX
#### TARGET3: ROTINA #####
rotina: comando.o
	gcc comando.o -o rotina	
	./rotina
	rm comando.o && rm rotina

comando.o: comando.c
	gcc -c comando.c


##### TARGET4: PROGRAMAS #####
apps = brave-browser discord libreoffice vlc gimp inkscape
ferramentas = build-essential git gnome-tweaks vim make
instalar_programas:
	sudo apt update
	sudo apt install -y ${ferramentas}
	sudo apt install -y ${apps}
	echo "Instalacao Finalizada!"

##### TARGET5: TAREFAS #####
minhas_tarefas: tarefas.o
	gcc tarefas.o -o tasks 
	./tasks
	rm tarefas.o && rm tasks 

tarefas.o: tarefas.c
	gcc -c tarefas.c

###############################
# APRENDIZADO
#-o -> permite nomear o nome
#-c -> compilar
#SEMPRE COLOCAR ./NOME
# É PONTO E BARRA ./ ./
#TERMINAL/CMD LINUX NAO VSCODE
