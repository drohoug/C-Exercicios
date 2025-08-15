//* @sobre  Exercicio 12 da aula 0 de programação estruturada
//* @author  Pedro Henrique RU: 5194697
//*Crie um programa que declare duas variáveis globais. Uma função deve //modificar o valor dessas variáveis. Outra função deve imprimir o valor // dessas variáveis.

#include <stdio.h>


int variavel_global1 = 10;
int variavel_global2 = 100;

int modificarVariaveis()
{
    variavel_global1 = 50;
    variavel_global2 = 150;
}


int visualizarVariaveis()
{
    printf("Valor da variavel global 1: %d\n", variavel_global1);
    printf("Valor da variavel global 2: %d\n", variavel_global2);

}



int main()
{
   printf("Valores iniciais das variaveis globais: %d\n", variavel_global1);
   printf("Valores iniciais das variaveis globais: %d\n\n", variavel_global2);
   modificarVariaveis();
   visualizarVariaveis();
}
