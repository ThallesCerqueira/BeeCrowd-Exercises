#include <stdio.h>

int main() {

    float a, cont = 0;

    for(int i = 0; i < 6; i++){
        scanf("%f", &a);
        if(a >= 0) {
            cont++;
        }
    }

    printf("%.0f valores positivos\n", cont);

    return 0;
}