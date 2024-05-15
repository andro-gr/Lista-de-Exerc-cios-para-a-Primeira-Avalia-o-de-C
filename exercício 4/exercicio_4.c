#include <stdio.h>

int main() {
    int numero;

    // Loop até que um número válido seja inserido
    do {
        printf("Digite um numero entre 12 e 20: ");
        scanf("%d", &numero);

        if (numero < 12 || numero > 20) {
            printf("Entrada invalida\n");
        }
    } while (numero < 12 || numero > 20);

    // Número válido inserido
    printf("Numero digitado: %d\n", numero);

    return 0;
}

