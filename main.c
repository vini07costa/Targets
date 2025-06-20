/******************************************************************************

Questão 01: Um professor deseja automatizar o lançamento de notas e frequências de uma turma. O programa deve: 

Perguntar quantos alunos existem na turma.
Para cada aluno, solicitar:
Nome
Três notas
Porcentagem de frequência
Calcular a média e verificar se o aluno foi:
Aprovado: média ≥ 7 e frequência ≥ 75%
Recuperação: média entre 5 e 6.9, frequência ≥ 75%
Reprovado: caso contrário
Exibir o nome e o status de cada aluno.

*******************************************************************************/
#include <stdio.h>

/* VOID !!!*/
void imprimir(char caractere, int quantidade){
    int a;
    a = 0;
    while(a < quantidade){
        printf("%c",caractere);
        a = a + 1;
    }
}
/* END VOID*/

int main(){
    
    /* VARIAVEIS */
    int nota1,nota2,nota3,media;    /* notas */
    char nomes[50];    /* nomes */
    int i , loop;    /* loop */
    int freq;    /* frequencia*/
    
    /* LOOP_ALUNOS */
    printf("Digite a quantidade de alunos : ");
        scanf("%d", &i);    
    
    loop = 0;
    while(loop < i){
        /* NOMES */
        printf("Digite nome do aluno: ");
             scanf("%49s", nomes); /*buffer overflow*/
             
        /* NOTAS */
        printf("Digite nota 1: ");
            scanf("%i", &nota1);
            printf("Digite nota 2: ");
                scanf("%i", &nota2);
                printf("Digite nota 3: ");
                    scanf("%i", &nota3);
        
        /* FREQUENCIA */            
        printf("Digite a frequencia do aluno/a : ");
            scanf("%i", &freq);
        
        /* MEDIA */
        media = nota1 + nota2 + nota3; 
        media = media/3;
        
        /* IF (MEDIA && FREQUENCIA) */
        if (media >= 7 && freq >= 75){
            imprimir('#', 30); // Imprime 30 '#'
            printf("\n%s",nomes);
                printf(" STATUS: APROVADO");
            printf("\n");
                imprimir('#', 30); // Imprime 30 '#'
            printf("\n");
            }else if(media >= 5 && media <= 6.9  && freq >= 75){
                imprimir('#', 30); // Imprime 30 '#'
                printf("\n%s",nomes);
                    printf(" STATUS: APROVADO");
                printf("\n"); 
                    imprimir('#', 30); // Imprime 30 '#'
                printf("\n");    
                }else{
                    imprimir('#', 30);
                    printf("\n%s",nomes);
                        printf(" STATUS: REPROVADO");
                    printf("\n");
                        imprimir('#', 30);
                    printf("\n");
                }
        loop = loop + 1;
    }
    return 0;
}
/******************************************************************************
 *                        REFERÊNCIA RÁPIDA - LINGUAGEM C
 ******************************************************************************/

/******************************************************************************
 * MÁSCARAS DE FORMATAÇÃO (printf / scanf):
 * 
 * %i ou %d  -> inteiro (int)           Exemplo: scanf("%i", &idade);
 * %f        -> ponto flutuante (float) Exemplo: scanf("%f", &nota);
 * %c        -> caractere (char)        Exemplo: scanf("%c", &letra);
 * %s        -> string (char[])         Exemplo: scanf("%s", nome);
 * 
 * OBSERVAÇÕES:
 * - Use & (endereço) antes da variável no scanf, exceto para strings
 * - %f no printf mostra 6 casas decimais por padrão
 * - Use %.2f para mostrar apenas 2 casas decimais
 ******************************************************************************/

/******************************************************************************
 * ESTRUTURAS CONDICIONAIS:
 * 
 * ESTRUTURA BÁSICA:
 *   if (condição) {
 *       // comandos executados se condição for verdadeira
 *   } else {
 *       // comandos executados se condição for falsa
 *   }
 * 
 * ESTRUTURA ENCADEADA:
 *   if (condição1) {
 *       // comandos para condição1
 *   } else if (condição2) {
 *       // comandos para condição2
 *   } else {
 *       // comandos se nenhuma condição for verdadeira
 *   }
 ******************************************************************************/

/******************************************************************************
 * OPERADORES RELACIONAIS:
 * 
 * ==   -> igual a              Exemplo: if (a == b)
 * !=   -> diferente de         Exemplo: if (a != b)
 * >    -> maior que            Exemplo: if (a > b)
 * <    -> menor que            Exemplo: if (a < b)
 * >=   -> maior ou igual a     Exemplo: if (a >= b)
 * <=   -> menor ou igual a     Exemplo: if (a <= b)
 * 
 * ATENÇÃO: Use == para comparação, = é para atribuição!
 ******************************************************************************/

/******************************************************************************
 * OPERADORES LÓGICOS:
 * 
 * &&   -> E (AND)     - Todas as condições devem ser verdadeiras
 * ||   -> OU (OR)     - Pelo menos uma condição deve ser verdadeira
 * !    -> NÃO (NOT)   - Inverte o valor lógico
 * 
 * EXEMPLOS:
 *   if (idade >= 18 && idade <= 65) {
 *       // Pessoa tem entre 18 e 65 anos
 *   }
 * 
 *   if (nota < 5 || faltas > 10) {
 *       // Reprovado por nota OU por faltas
 *   }
 * 
 *   if (!(aprovado)) {
 *       // Se NÃO foi aprovado
 *   }
 ******************************************************************************/

/******************************************************************************
 * OPERADORES ARITMÉTICOS:
 * 
 * +    -> adição               Exemplo: soma = a + b;
 * -    -> subtração            Exemplo: diff = a - b;
 * *    -> multiplicação        Exemplo: produto = a * b;
 * /    -> divisão              Exemplo: quociente = a / b;
 * %    -> módulo (resto)       Exemplo: resto = a % b;
 * 
 * OBSERVAÇÕES IMPORTANTES:
 * - Divisão de inteiros resulta em inteiro (5/2 = 2, não 2.5)
 * - Use float/double para divisões com decimais
 * - Operador % só funciona com números inteiros
 * - resto = num % 2; (0 = par, 1 = ímpar)
 ******************************************************************************/

/******************************************************************************
 * ESTRUTURAS DE REPETIÇÃO:
 * 
 * WHILE (enquanto):
 *   contador = 1;
 *   while (contador <= 10) {
 *       // comandos repetidos
 *       contador++;  // ou contador = contador + 1;
 *   }
 * 
 * FOR (para):
 *   for (int i = 1; i <= 10; i++) {
 *       // comandos repetidos
 *   }
 * 
 * DO-WHILE (faça-enquanto):
 *   do {
 *       // comandos executados pelo menos uma vez
 *   } while (condição);
 ******************************************************************************/

/******************************************************************************
 * BIBLIOTECAS IMPORTANTES:
 * 
 * #include <stdio.h>   -> Entrada/saída (printf, scanf)
 * #include <stdlib.h>  -> Funções gerais (rand, srand, system)
 * #include <time.h>    -> Funções de tempo (time)
 * #include <math.h>    -> Funções matemáticas (sqrt, pow, etc.)
 * #include <string.h>  -> Manipulação de strings (strlen, strcpy, etc.)
 ******************************************************************************/

/******************************************************************************
 * GERAÇÃO DE NÚMEROS ALEATÓRIOS:
 * 
 * #include <stdlib.h>
 * #include <time.h>
 * 
 * srand(time(NULL));        // Inicializa o gerador (uma vez no programa)
 * numero = rand();          // Gera número aleatório qualquer
 * numero = rand() % 100;    // Gera número de 0 a 99
 * numero = rand() % 100 + 1; // Gera número de 1 a 100
 * 
 * EXPLICAÇÃO:
 * - srand() define a "semente" do gerador
 * - time(NULL) usa o tempo atual como semente
 * - % limita o range do número gerado
 ******************************************************************************/

/******************************************************************************
 * CARACTERES ESPECIAIS:
 * 
 * \n   -> nova linha (quebra de linha)
 * \t   -> tabulação (espaçamento)
 * \"   -> aspas duplas literais
 * \'   -> aspas simples literais
 * \\   -> barra invertida literal
 * 
 * EXEMPLO:
 * printf("Primeira linha\nSegunda linha\n");
 * printf("Nome:\tJoão\nIdade:\t25\n");
 ******************************************************************************/

/******************************************************************************
 * DICAS DE PROGRAMAÇÃO:
 * 
 * 1. NOMEAÇÃO DE VARIÁVEIS:
 *    - Use nomes descritivos: idade, nome, salario
 *    - Evite nomes genéricos: a, b, x, y
 * 
 * 2. INICIALIZAÇÃO:
 *    - Sempre inicialize contadores: contador = 0;
 *    - Para multiplicação, inicialize com 1: produto = 1;
 *    - Para soma, inicialize com 0: soma = 0;
 * 
 * 3. VALIDAÇÃO:
 *    - Sempre verifique entradas do usuário
 *    - Trate casos especiais (divisão por zero, números negativos)
 * 
 * 4. COMENTÁRIOS:
 *    - Comente a lógica complexa
 *    - Explique o propósito das variáveis
 *    - Documente algoritmos importantes
 ******************************************************************************/