#include <stdio.h>

int main() {
    int numero;

    // Loop at� que um n�mero v�lido seja inserido
    do {
        printf("Digite um numero entre 12 e 20: ");
        scanf("%d", &numero);

        if (numero < 12 || numero > 20) {
            printf("Entrada invalida\n");
        }
    } while (numero < 12 || numero > 20);

    // N�mero v�lido inserido
    printf("Numero digitado: %d\n", numero);

    return 0;
}

