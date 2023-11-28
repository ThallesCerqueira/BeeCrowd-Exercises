#include <stdio.h>

int main() {

    float a, aumento, salario, percent;

    scanf("%f", &a);

    if(a >= 0 && a <= 400){

        aumento = a * 0.15;
        salario = a + aumento;
        percent = 15;
    } else if(a > 400 && a <= 800) {

        aumento = a * 0.12;
        salario = a + aumento;
        percent = 12;
    } else if(a > 800 && a <= 1200) {

        aumento = a * 0.10;
        salario = a + aumento;
        percent = 10;
    } else if(a > 1200 && a <= 2000) {
        aumento = a * 0.07;
        salario = a + aumento;
        percent = 7;
    } else {
        aumento = a * 0.04;
        salario = a + aumento;
        percent = 4;
    }

    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", aumento);
    printf("Em percentual: %.0f %%\n", percent);

    return 0;
}