#include <stdio.h>

int main() {
  printf("d) Elaborar um programa que apresente o somatório dos valores pares existentes na faixa de 1 até 500.\n");
  int soma = 0;
  for (int i = 2; i <= 500; i += 2) {
    soma += i;
  }
  printf("O somatório dos valores pares de 1 até 500 é: %d\n", soma);
  return 0;
}