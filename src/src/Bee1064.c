#include <stdio.h>

int main() {

    float a, soma, cont;

    soma = cont = 0;

    for(int i = 0; i < 6; i++) {

        scanf("%f", &a);

        if( a >= 0) {
            soma += a;
            cont++;
        }

    
    }

    soma /= cont;

    printf("%0.f valores positivos\n", cont);
    printf("%.1f\n", soma);

    return 0;
}