#include <stdio.h>

long long int calcularFatorial(int numero) {
  long long int fatorial = 1;
  for (int i = 1; i <= numero; i++) {
    fatorial *= i;
  }
  return fatorial;
}

int main() {
  printf("o) Construir um programa que apresente como resultado a fatorial dos valores ímpares situados na faixa numérica de 1 até 10.\n");
  for (int i = 1; i <= 10; i += 2) {
    printf("%d! = %lld\n", i, calcularFatorial(i));
  }
  return 0;
}