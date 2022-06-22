/*Imprimir numeros negativos num vetor */


#include <stdio.h>

int main()
{
    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vetor[n];

    for (int i=0; i<n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Numeros Negativos:\n");

    for (int i=0; i<n; i++)
    {
        if (vetor[i] < 0)
        {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
