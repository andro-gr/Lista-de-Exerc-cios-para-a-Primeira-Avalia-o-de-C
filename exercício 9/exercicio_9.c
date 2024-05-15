#include <stdio.h>

int main() {
    // Altura inicial de Chico e Z� em metros
    float altura_chico = 1.50;
    float altura_ze = 1.10;

    // Taxa de crescimento anual de Chico e Z� em metros
    float crescimento_chico = 0.02; // 2 cent�metros por ano
    float crescimento_ze = 0.03;    // 3 cent�metros por ano

    // Contador de anos necess�rios
    int anos = 0;

    // Enquanto a altura de Z� for menor ou igual � altura de Chico, continue aumentando as alturas
    while (altura_ze <= altura_chico) {
        altura_chico += crescimento_chico;
        altura_ze += crescimento_ze;
        anos++;
    }

    // Impress�o do resultado
    printf("Ser�o necess�rios %d anos para que Z� seja mais alto que Chico.\n", anos);

    return 0;
}

