#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    // Loop para ler números até encontrar um número igual a zero
    do {
        printf("Digite um numero (digite 0 para sair): ");
        scanf("%d", &numero);

        // Adiciona o número à soma, se não for zero
        if (numero != 0) {
            soma += numero;
        }
    } while (numero != 0);

    // Mostra a soma dos números digitados
    printf("A soma dos numeros digitados e: %d\n", soma);

    return 0;
}

