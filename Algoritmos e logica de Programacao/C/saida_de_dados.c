#include <stdio.h>

/*Saida de dados usando Placeholder*/


int main()
{

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    idade = 20;
    salario = 5800.5;
    genero = 'F';
    strcpy(nome, "Maria Silva");

    printf("A funcionaria %s, genero %c, ganha %.2lf e tem %d anos.", nome, genero, salario, idade);

    return 0 ;
}

