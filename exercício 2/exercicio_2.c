#include <stdio.h>

int main() {
    int idade, soma = 0, contador = 0;
    char resposta;

    // Loop para solicitar idades e calcular a m�dia
    do {
        // Solicitando uma nova idade ao usu�rio
        printf("Digite a idade: ");
        scanf("%d", &idade);

        // Adicionando a idade � soma total
        soma += idade;
        contador++; // Incrementando o contador de idades

        // Perguntando ao usu�rio se deseja inserir outra idade
        printf("Deseja inserir outra idade? (s/n): ");
        scanf(" %c", &resposta);
    } while (resposta == 's' || resposta == 'S');

    // Calculando a m�dia das idades
    float media = (float)soma / contador;

    // Exibindo a m�dia das idades
    printf("A media das idades inseridas e: %.2f\n", media);

    return 0;
}

