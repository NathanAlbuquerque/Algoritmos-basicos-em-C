#include <stdio.h>

int main() 
{
    float SM, PR, NS;

    printf("Informe o salario mensal: ");
    scanf("%f", &SM);
    
    printf("Informe o percentual de reajuste: ");
    scanf("%f", &PR);

    NS = SM + (SM * PR);

    printf("O novo salario: %f", NS);

    return 0;
}