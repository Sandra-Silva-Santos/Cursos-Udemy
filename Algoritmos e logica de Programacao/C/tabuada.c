/*Tabuada _Exemplo da aula */


#include <stdio.h>

int main()
{
    int n, produto;

    printf("Deseja a tabuada para qual numero?  ");
    scanf("%d", &n);

    for (int i=1; i<=10; i++)
    {
        produto = n * i;
        printf("%d x %d = %d\n", n, i, produto);
    }

    return 0;
}

