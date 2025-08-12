//* @sobre  Exercicio 09 da aula 0 de programação estruturada
//* @author  Pedro Henrique RU: 5194697

//* Crie uma função chamada "parOuImpar" que recebe um número inteiro e imprime se ele é par
//* ou ímpar. Use esta função em seu programa principal.
#include <stdio.h>

int parOuImpar(int numero)
{
  if (numero % 2 == 0)
    printf("O numero %d eh par.\n", numero);
  else
    printf("O numero %d eh impar.\n", numero);
  return 0;
}


int main()
{
  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);
  parOuImpar(numero);
  return 0;
}
