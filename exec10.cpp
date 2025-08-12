//* @sobre  Exercicio 10 da aula 0 de programação estruturada
//* @author  Pedro Henrique RU: 5194697
//* Crie um programa que declare uma variável global e uma função. A função deve modificar o valor da variável global para o valor informado pelo usuário e o programa principal deve imprimir este valor. 

#include <stdio.h>

int global = 0;

  void modificarGlobal()
{
  printf("O valor da variavel global eh: %d\n\n", global);		
	
  printf("Digite um valor para a variavel global: ");
  scanf("%d", &global);
}

int main()
{
  modificarGlobal();
  printf("O valor da variavel global eh: %d\n", global);
  return 0;
}
