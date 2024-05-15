#include <stdio.h>

int main() {
    int voto;
    int votos_candidato[4] = {0}; // Inicializa o array de votos para cada candidato com zero
    int votos_nulos = 0;
    int votos_em_branco = 0;

    printf("Informe o codigo do voto (1 a 4 para candidatos, 5 para voto nulo, 6 para voto em branco): ");
    scanf("%d", &voto);

    while (voto != 0) {
        switch (voto) {
            case 1:
            case 2:
            case 3:
            case 4:
                votos_candidato[voto - 1]++; // Incrementa o contador de votos para o candidato correspondente
                break;
            case 5:
                votos_nulos++; // Incrementa o contador de votos nulos
                break;
            case 6:
                votos_em_branco++; // Incrementa o contador de votos em branco
                break;
            default:
                printf("Codigo de voto invalido!\n");
                break;
        }

        printf("Informe o codigo do voto (1 a 4 para candidatos, 5 para voto nulo, 6 para voto em branco): ");
        scanf("%d", &voto);
    }

    // Imprime o total de votos para cada candidato
    printf("\nTotal de votos para cada candidato:\n");
    for (int i = 0; i < 4; i++) {
        printf("Candidato %d: %d votos\n", i + 1, votos_candidato[i]);
    }

    // Imprime o total de votos nulos e em branco
    printf("\nTotal de votos nulos: %d\n", votos_nulos);
    printf("Total de votos em branco: %d\n", votos_em_branco);

    return 0;
}

