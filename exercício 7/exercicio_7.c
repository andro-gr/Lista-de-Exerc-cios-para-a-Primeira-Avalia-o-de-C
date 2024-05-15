#include <stdio.h>

int main() {
    // Defini��o das popula��es iniciais e taxas de natalidade
    int populacao_A = 5000000;
    int populacao_B = 7000000;
    float taxa_natalidade_A = 0.03; // 3% ao ano
    float taxa_natalidade_B = 0.02; // 2% ao ano

    int anos = 0;

    // Loop para calcular o tempo necess�rio para A ultrapassar B
    while (populacao_A <= populacao_B) {
        populacao_A += populacao_A * taxa_natalidade_A;
        populacao_B += populacao_B * taxa_natalidade_B;
        anos++;
    }

    // Impress�o do tempo necess�rio
    printf("Populacao do pais A ultrapassara a populacao do pais B em %d anos.\n", anos);

    return 0;
}

