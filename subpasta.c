#include <stdio.h>
#include <stdlib.h> /*Para a função system*/

int main(){
    
    char permissao;
    
    printf("AVISO\n");
    printf("EXECUTAR criar_pastas ANTES!\n");
    printf("VOCE EXECUTOU ANTES? Y ou N \n");
        scanf("%c", &permissao);
    
    if(permissao == 'Y'){
        printf("---Criando pastas EXTRAS---\n");
    /* Pasta EF */
        system("cd Elementos_de_Fisica && mkdir aula_01 && mkdir aula_02");
        system("cd Elementos_de_Fisica && mkdir aula_03 && mkdir aula_04");
        system("cd Elementos_de_Fisica && mkdir aula_05 && mkdir aula_06");
        system("cd Elementos_de_Fisica && mkdir aula_07 && mkdir aula_08");
        system("cd Elementos_de_Fisica && mkdir aula_09 && mkdir aula_10");
    
    /*PASTA EM */    
        system("cd Elementos_de_Matematica && mkdir aula_01 && mkdir aula_02");
        system("cd Elementos_de_Matematica && mkdir aula_03 && mkdir aula_04");
        system("cd Elementos_de_Matematica && mkdir aula_05 && mkdir aula_06");
        system("cd Elementos_de_Matematica && mkdir aula_07 && mkdir aula_08");
        system("cd Elementos_de_Matematica && mkdir aula_09 && mkdir aula_10");
    
    /* FHS */
        system("cd Fundamentos_de_Hardware_e_Software && mkdir aula_01 && mkdir aula_02");
        system("cd Fundamentos_de_Hardware_e_Software && mkdir aula_03 && mkdir aula_04");
        system("cd Fundamentos_de_Hardware_e_Software && mkdir aula_05 && mkdir aula_06");
        system("cd Fundamentos_de_Hardware_e_Software && mkdir aula_07 && mkdir aula_08");
        system("cd Fundamentos_de_Hardware_e_Software && mkdir aula_09 && mkdir aula_10");
    
    /* GP 1*/
        system("cd Gestao_de_projeto_I && mkdir aula_01 && mkdir aula_02");
        system("cd Gestao_de_projeto_I && mkdir aula_03 && mkdir aula_04");
        system("cd Gestao_de_projeto_I && mkdir aula_05 && mkdir aula_06");
        system("cd Gestao_de_projeto_I && mkdir aula_07 && mkdir aula_08");
        system("cd Gestao_de_projeto_I && mkdir aula_09 && mkdir aula_10");
    
    /* IEC*/    
        system("cd Introdução_a_Engenharia_da_Computação && mkdir aula_01 && mkdir aula_02");
        system("cd Introdução_a_Engenharia_da_Computação && mkdir aula_03 && mkdir aula_04");
        system("cd Introdução_a_Engenharia_da_Computação && mkdir aula_05 && mkdir aula_06");
        system("cd Introdução_a_Engenharia_da_Computação && mkdir aula_07 && mkdir aula_08");
        system("cd Introdução_a_Engenharia_da_Computação && mkdir aula_09 && mkdir aula_10");
    
    /* QGB */
        system("cd Quimica_geral_basica && mkdir aula_01 && mkdir aula_02");
        system("cd Quimica_geral_basica && mkdir aula_03 && mkdir aula_04");
        system("cd Quimica_geral_basica && mkdir aula_05 && mkdir aula_06");
        system("cd Quimica_geral_basica && mkdir aula_07 && mkdir aula_08");
        system("cd Quimica_geral_basica && mkdir aula_09 && mkdir aula_10");
   
    }else if(permissao == 'N'){
        printf("COMANDO CANCELADO\n");
    }else{
        printf("ERRO: LETRA ERRADA\n");
    } 
    return 0;
}