#include <stdio.h>

int main() {
    int n, i;
    printf("Quantas pessoas serao entrevistadas? ");
    scanf("%d", &n);

    int idade, maiorIdade = 0, menorIdade = 1000, qtdMulheres = 0;
    char sexo;
    float salario, somaSalarios = 0, menorSalario = 1000000;
    int idadeMenorSalario;
    char sexoMenorSalario;

    for (i = 0; i < n; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        printf("Digite o sexo da pessoa %d (M/F): ", i + 1);
        scanf(" %c", &sexo);

        printf("Digite o salario da pessoa %d: ", i + 1);
        scanf("%f", &salario);

        // Calcula a soma dos salários para a média
        somaSalarios += salario;

        // Atualiza a maior e menor idade
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
        }

        // Conta a quantidade de mulheres
        if (sexo == 'F' || sexo == 'f') {
            qtdMulheres++;
        }

        // Identifica a pessoa com o menor salário
        if (salario < menorSalario) {
            menorSalario = salario;
            idadeMenorSalario = idade;
            sexoMenorSalario = sexo;
        }
    }

    // Calcula a média dos salários
    float mediaSalarios = somaSalarios / n;

    // Mostra os resultados
    printf("A media dos salarios do grupo: %.2f\n", mediaSalarios);
    printf("A maior idade do grupo: %d\n", maiorIdade);
    printf("A menor idade do grupo: %d\n", menorIdade);
    printf("A quantidade de mulheres na regiao: %d\n", qtdMulheres);
    printf("A idade da pessoa com o menor salario: %d\n", idadeMenorSalario);
    printf("O sexo da pessoa com o menor salario: %c\n", sexoMenorSalario);

    return 0;
}

