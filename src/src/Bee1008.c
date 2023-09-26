#include <stdio.h>

int main() {

    int nFuncionario, hrsTrabalhadas;
    float valorHora, salario;

    scanf("%d", &nFuncionario);
    scanf("%d", &hrsTrabalhadas);
    scanf("%f", &valorHora);

    salario = hrsTrabalhadas * valorHora;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", nFuncionario, salario);

    return 0;
}