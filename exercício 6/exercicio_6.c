#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    // Loop para ler n�meros at� encontrar um n�mero igual a zero
    do {
        printf("Digite um numero (digite 0 para sair): ");
        scanf("%d", &numero);

        // Adiciona o n�mero � soma, se n�o for zero
        if (numero != 0) {
            soma += numero;
        }
    } while (numero != 0);

    // Mostra a soma dos n�meros digitados
    printf("A soma dos numeros digitados e: %d\n", soma);

    return 0;
}

