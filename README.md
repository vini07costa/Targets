# README
# **AVISO:APLICAR ESTE COMANDO:** `chmod 707 makefile`


### TARGET 1: FACULDADE
Criar diretorios com os nomes dos conteudos do 1 semestre

### TARGET 2: FACULDADE_EXTRA
Permite criar subdiretorios: 
*   *aula 01*
*   *aula 02*

...etc

### TARGET 3: PROGRAMA EM C
Copia e cola de um programa na linguagem *C* de um atividade de *Fundamentos de Hardware e Software*

### TARGET 4: ROTINA_LINUX
Permite atualizar o linux e remover as dependencias que nao seram mais utilizadas

### TARGET 5: TAREFAS
Print/echo de uma rotina generica onde mostra as tarefas que devem ser realizadas


programa_final: parte1.o parte2.o
	gcc parte1.o parte2.o -o programa_final

parte1.o: parte1.c
	gcc -c parte1.c

parte2.o: parte2.c
	gcc -c parte2.c
