#include <stdio.h>

int main() 
{
    float COTACAO_BR_US, VALOR_US, VALOR_RS;

    printf("Informe o valor da cotacao do dolar para real: ");
    scanf("%f", &COTACAO_BR_US);

    printf("Informe o valor em dolár: ");
    scanf("%f", &VALOR_US);

    VALOR_RS = VALOR_US * COTACAO_BR_US;

    printf("O valor em dolar convertido em real fica: %f", VALOR_RS);

    return 0;
}