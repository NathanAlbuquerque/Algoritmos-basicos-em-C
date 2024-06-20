#include <stdio.h>

long long int calcularFatorial(int numero) {
  long long int fatorial = 1;
  for (int i = 1; i <= numero; i++) {
    fatorial *= i;
  }
  return fatorial;
}

int main() {
  printf("l) Elaborar um programa que leia quinze valores numéricos inteiros e no final apresente o somatório da fatorial de cada valor lido.\n");
  long long int somatorio = 0;

  for (int i = 1; i <= 15; i++) {
    int valor;
    printf("Digite o %dº valor: ", i);
    scanf("%d", &valor);

    somatorio += calcularFatorial(valor);
  }

  printf("Somatório das fatoriais: %lld\n", somatorio);
  return 0;
}