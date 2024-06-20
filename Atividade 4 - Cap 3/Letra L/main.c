#include <stdio.h>

int main() 
{
    float COTACAO_US_RS, VALOR_RS, VALOR_US;

    printf("Informe o valor da cotacao do real para dolar: ");
    scanf("%f", &COTACAO_US_RS);

    printf("Informe o valor em real: ");
    scanf("%f", &VALOR_RS);

    VALOR_US = VALOR_RS * COTACAO_US_RS;

    printf("O valor em dolar convertido em dolar fica: %f", VALOR_US);

    return 0;
}