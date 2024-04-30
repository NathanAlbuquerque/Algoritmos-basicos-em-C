#include <stdio.h>

int main() 
{
    float VALOR, TAXA, TEMPO, PRESTACAO;

 	printf("Informe o valor do bem: ");
    scanf("%f", &VALOR);
    
    printf("Informe a taxa de atraso: ");
    scanf("%f", &TAXA);

    printf("Informe o tempo de atraso: ");
    scanf("%f", &TEMPO);

    PRESTACAO = VALOR + VALOR * (TAXA / 100) * TEMPO;

    printf("O valor da prestação fica: %.2f", PRESTACAO);

    return 0;
}