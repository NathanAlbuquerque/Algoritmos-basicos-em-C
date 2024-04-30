#include <stdio.h>

int main() 
{
    int X0, X1, X2;

    printf("Informe o valor de um numero: ");
    scanf("%d", &X1);

    X2 = X1 + 1;
    X0 = X1 - 1;

    printf("O sucessor: %d", X2);
    printf("\n");
    printf("O antecessor: %d", X0);

    return 0;
}