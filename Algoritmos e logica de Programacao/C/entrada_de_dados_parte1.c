#include <stdio.h>

/*scanf só imprime texto contíguo: uma unica palavra sem espaços e não é necessário o simbolo '&' antes da variavel */


int main()
{

    int idade;
    double salario, altura;
    char nome[50];


    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite o valor do seu salario: ");
    scanf("%lf", &salario);
    printf("Digite sua altura: ");
    scanf("%lf", &altura);
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("NOME = %s\n", nome);


    return 0 ;
}

