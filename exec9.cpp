//* @sobre  Exercicio 09 da aula 0 de programa��o estruturada
//* @author  Pedro Henrique RU: 5194697

//* Crie uma fun��o chamada "parOuImpar" que recebe um n�mero inteiro e imprime se ele � par
//* ou �mpar. Use esta fun��o em seu programa principal.
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
