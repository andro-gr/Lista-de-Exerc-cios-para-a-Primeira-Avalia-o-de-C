#include <stdio.h>

int main() {
    // Altura inicial de Chico e Zé em metros
    float altura_chico = 1.50;
    float altura_ze = 1.10;

    // Taxa de crescimento anual de Chico e Zé em metros
    float crescimento_chico = 0.02; // 2 centímetros por ano
    float crescimento_ze = 0.03;    // 3 centímetros por ano

    // Contador de anos necessários
    int anos = 0;

    // Enquanto a altura de Zé for menor ou igual à altura de Chico, continue aumentando as alturas
    while (altura_ze <= altura_chico) {
        altura_chico += crescimento_chico;
        altura_ze += crescimento_ze;
        anos++;
    }

    // Impressão do resultado
    printf("Serão necessários %d anos para que Zé seja mais alto que Chico.\n", anos);

    return 0;
}

