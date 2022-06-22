#include<stdio.h>
#include<string.h>

/*Entrada de dados C Exemplo da aula */

/* Comando para limpeza de buffer */

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

/* Na linguagem C o "Enter" gera a impressao da quebra de linha_segue comando para não imprimir esta quebra*/

/*Comando quebra de linha */

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int idade1, idade2;
    char nome1[50], nome2[50];

    printf("Digite o valor da idade1: ");
    scanf("%d", &idade1);
    printf("Digite o nome da pessoa1: ");
    limpar_entrada();
    fgets(nome1, 50, stdin);
    strtok(nome1, "\n");

    printf("Digite o valor da idade2: ");
    scanf("%d", &idade2);
    printf("Digite o nome da pessoa2: ");
    limpar_entrada();
    fgets(nome2, 50, stdin);
    strtok(nome2, "\n");

    printf("IDADE1 = %d\n", idade1);
    printf("NOME1 = %s\n", nome1);
    printf("IDADE2 = %d\n", idade2);
    printf("NOME2 = %s\n", nome2);

    return 0;
}

