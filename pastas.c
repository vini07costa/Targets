#include <stdio.h>
#include <stdlib.h> /*Para a função system*/

int main(){

    printf("---Criando pastas---");
    /* Pasta EF */
        system("mkdir Elementos_de_Fisica");
            printf("\n");
        
    /* Pasta EM */
        system("mkdir Elementos_de_Matematica");
            printf("\n");
        
    /* Pasta FHS */
        system("mkdir Fundamentos_de_Hardware_e_Software");
            printf("\n");

    /* Pasta GP1 */
        system("mkdir Gestao_de_projeto_I");
            printf("\n");

    /* Pasta IEG */
        system("mkdir Introdução_a_Engenharia_da_Computação");
            printf("\n");

    /* Pasta QGB */
        system("mkdir Quimica_geral_basica");
            printf("\n");

    printf("---Pastas Criadas com sucesso---\n");
    
    return 0;
}
