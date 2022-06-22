#include <stdio.h>
#include <string.h>

/*É possivel incluir atribuição na declaração da variavél _ Exemplo (int idade = 20) e (char nome[50] = "Maria Silva") */


int main()
{

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva");

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %1f\n", salario);
    printf("ALTURA = %1f\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    return 0;

}
