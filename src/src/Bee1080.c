#include <stdio.h>


int main() {

    int a, maior, posicao;

    maior = posicao = 0;

    for(int i = 1; i <= 100; i++) {
        scanf("%d", &a);

        if(a > maior) {
            maior = a;
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior, posicao);


    return 0;
}