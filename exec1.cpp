//* @sobre  Exercicio 01 da aula 0 de programação estruturada
//* @author  Pedro Henrique RU: 5194697

///* @brief  Este programa imprime na tela os valores de variáveis de diferentes
/// tipos)
#include <locale.h>
#include <stdbool.h>
#include <stdio.h>

int main()

{
  int valor_inteiro = 20;
  float valor_float = 20.5;
  char texto[10] = "Aula 0"; // Allocate an array of 10 characters
  bool boleano = false;

  printf("Valor inteiro: %d\n", valor_inteiro);
  printf("Valor float: %f\n", valor_float);
  printf("Valor string: %s\n", texto);
  printf("Valor booleano: %d\n", boleano);
}

