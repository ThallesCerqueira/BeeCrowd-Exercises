#include <stdio.h>

int menor(int a, int b);

int main() {

    int n, x, y, qtd, menor, maior;
    qtd = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        scanf("%d %d", &x, &y);

        if(x == y) {
            printf("0\n");
        }else {

            if(x < y) {
                menor = x + 1;
                maior = y - 1;
            } else {
                menor = y + 1;
                maior = x - 1;
            }

            while(menor <= maior){

                if(menor % 2 == 1) {
                    qtd += menor;
                }

                menor++;

            }

            printf("%d\n", qtd);
            qtd = 0;
        }

    }

    return 0;
}

int menor(int a, int b) {

    if(a < b) return a;

    return b;

}