#include <stdio.h>

// Função para calcular o valor total das compras à vista
float calcularTotalAVista(float valores[], int tamanho) {
    float total = 0;
    for (int i = 0; i < tamanho; i++) {
        total += valores[i];
    }
    return total;
}

// Função para calcular o valor total das compras a prazo
float calcularTotalAPrazo(float valores[], int tamanho) {
    float total = 0;
    for (int i = 0; i < tamanho; i++) {
        total += valores[i];
    }
    return total;
}

// Função para calcular o valor total das compras efetuadas
float calcularTotal(float valores[], int tamanho) {
    float total = 0;
    for (int i = 0; i < tamanho; i++) {
        total += valores[i];
    }
    return total;
}

int main() {
    // Declaração das variáveis
    char codigos[15];
    float valores[15];
    float totalAVista, totalAPrazo, total;

    // Recebendo os códigos e valores das transações
    printf("Digite o codigo (V para compra a vista, P para compra a prazo) e o valor de cada transacao:\n");
    for (int i = 0; i < 15; i++) {
        printf("Transacao %d: ", i + 1);
        scanf(" %c %f", &codigos[i], &valores[i]);
    }

    // Calculando os valores totais
    totalAVista = calcularTotalAVista(valores, 15);
    totalAPrazo = calcularTotalAPrazo(valores, 15);
    total = calcularTotal(valores, 15);

    // Exibindo os resultados
    printf("\nValor total das compras a vista: R$ %.2f\n", totalAVista);
    printf("Valor total das compras a prazo: R$ %.2f\n", totalAPrazo);
    printf("Valor total das compras efetuadas: R$ %.2f\n", total);

    return 0;
}

