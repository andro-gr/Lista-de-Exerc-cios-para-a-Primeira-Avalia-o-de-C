#include <stdio.h>

int main() {
    int i, numero;
    int dentro = 0;  // Contador para números dentro do intervalo [10, 20]
    int fora = 0;    // Contador para números fora do intervalo [10, 20]

    // Loop para ler 10 números
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);

        // Verifica se o número está dentro do intervalo [10, 20]
        if (numero >= 10 && numero <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    // Imprime os resultados
    printf("Quantidade de numeros dentro do intervalo [10, 20]: %d\n", dentro);
    printf("Quantidade de numeros fora do intervalo [10, 20]: %d\n", fora);

    return 0;
}

