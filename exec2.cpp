//* @sobre  Exercicio 02 da aula 0 de programação estruturada
//* @author  Pedro Henrique RU: 5194697

#include <stdio.h>
#include <locale.h>



int main() {

setlocale(LC_ALL, "Portuguese");

char c; 

printf("Digite um caractere: ");

scanf("%c", &c);

printf("O código ASCII do caractere %c é %d.\n", c, c); 
return 0;
}
	
