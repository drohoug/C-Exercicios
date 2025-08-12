#include <stdio.h>

int main() {
    int numero, incremento;
    char caractere;

    // Entrada dos valores iniciais
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // espaço antes do %c para ignorar enter anterior

    // Quantidade de incrementos
    printf("Digite quantas vezes deseja incrementar: ");
    scanf("%d", &incremento);

    // Incrementa e exibe os resultados
    for (int i = 1; i <= incremento; i++) {
        numero++;
        caractere++;
        printf("\nIncremento %d:\n", i);
        printf("Numero: %d\n", numero);
        printf("Caractere: %c\n", caractere);
    }

    return 0;
}

