#include <stdio.h>

int main() {

    int cdgPc1, cdgPc2, qtdPc1, qtdPc2;
    double valorPc1, valorPc2, pagar;

    scanf("%d %d %lf", &cdgPc1, &qtdPc1, &valorPc1);
    scanf("%d %d %lf", &cdgPc2, &qtdPc2, &valorPc2);

    pagar = qtdPc1 * valorPc1 + qtdPc2 * valorPc2;

    printf("VALOR A PAGAR: R$ %.2lf\n", pagar);

    return 0;
}