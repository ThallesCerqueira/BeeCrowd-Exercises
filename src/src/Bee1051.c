#include <stdio.h>

int main() {
    
    double a, aux, aux2;

    scanf("%lf", &a);

    if(a >= 0 && a < 2000) {
        printf("Isento\n");
        return 0;
    } else if(a > 2000 && a < 3000) {
        a -= 2000;
        a = a * 0.08;
    }  else if(a > 3000 && a < 4500) {
        aux = 1000 * 0.08;
        aux2 = (a - 3000) * 0.18;
        a = aux + aux2;
    } else {
        aux = 1000 * 0.08 + 1500 * 0.18;
        aux2 = (a - 4500) * 0.28;
        a = aux + aux2;
    }
    
    printf("R$ %.2lf\n", a);

    return 0;

}