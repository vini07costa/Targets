#include <stdio.h>
#include <stdlib.h> /*Para a função system*/

int main(){
    char permissao;
    printf("AVISO\n");
    printf("1 = UPDATE\n");
    printf("2 = CORREÇÃO DE PACOTES\n");
    printf("3 = CORREÇAO + LIMPAR PACOTES\n");
    printf("4 = LIMPEZA DE PACOTES + CACHE\n");
    printf("5 = ATUALIZAÇÃO COMPLETA + LIMPEZA COMPLETA\n");
    printf("DIGITE O NUMERO/LEVEL QUE DESEJA EXECUTAR: ");
        scanf("%c", &permissao);

    //LEVEL 1
    if(permissao == '1'){
        printf("---ATUALIZANDO PACOTES---\n");
            system("sudo apt update -y && sudo apt upgrade -y");
        }else if(permissao == '2'){
            printf("---CORRIGINDO PACOTES---\n");
                system("sudo apt --fix-broken install -y && sudo dpkg --configure -a && sudo apt update --fix-missing -y");
            }else if(permissao == '3'){
                printf("---CORRIGINDO PACOTES E LIMPAR PACOTES---\n");
                    system("sudo apt --fix-broken install -y && sudo dpkg --configure -a && sudo apt update --fix-missing -y");
                        system("sudo apt autoremove -y");
                }else if(permissao == '4'){
                    printf("---LIMPEZA DE PACOTES E CACHE---\n");
                        system("sudo apt autoremove -y && sudo apt clean -y && sudo apt autoclean -y");
                    }else if(permissao == '5'){
                        printf("---ATUALIZAÇÃO COMPLETA E LIMPEZA COMPLETA---\n");
                            system("sudo apt update -y && sudo apt upgrade -y");    
                                system("sudo apt --fix-broken install -y && sudo dpkg --configure -a && sudo apt update --fix-missing -y");                    
                                    system("sudo apt autoremove -y && sudo apt clean -y && sudo apt autoclean -y");
                        }else{        
                            printf("ERRO: LEVEL INVALIDO\n");
                                printf("EXECUTE NOVAMENTE E LEIA AS INSTRUÇÕES...\n");
    };    
    return 0;
}