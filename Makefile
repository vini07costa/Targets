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
##### TARGET3: ROTINA #####
rotina:
	sudo apt update
	sudo apt upgrade
	sudo apt autoremove && sudo apt autoclean

##### TARGET4: PROGRAMAS #####
apps = brave-browser discord libreoffice vlc gimp inkscape
ferramentas = build-essential git gnome-tweaks vim make
instalar_programas:
	sudo apt update
	sudo apt install ${ferramentas}
	sudo apt install ${apps}

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
#PARTE 1: programa_final->
#name_program: .o
#	gcc .o -o name
#	./name
#	rm name
#
#PARTE2:
#.o: .c
#gcc -c .c
#
#
#
#SEMPRE COLOCAR ./NOME
# É PONTO E BARRA ./ ./
# É PONTO E BARRA ./ ./
# É PONTO E BARRA ./ ./
# É PONTO E BARRA ./ ./
#1 HORA CORRINGO ESSA PORCARIA!!!
#TERMINAL/CMD LINUX NAO VSCODE
#TERMINAL/CMD LINUX NAO VSCODE
#TERMINAL/CMD LINUX NAO VSCODE
#TERMINAL/CMD LINUX NAO VSCODE
#TERMINAL/CMD LINUX NAO VSCODE