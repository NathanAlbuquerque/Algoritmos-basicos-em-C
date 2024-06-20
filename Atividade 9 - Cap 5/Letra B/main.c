#include <stdio.h>

int main() {
  printf("b) Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual deve ser apresentada de acordo com sua forma tradicional.\n");
  int numero;
  printf("Digite o número para a tabuada: ");
  scanf("%d", &numero);
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
  }
  return 0;
}