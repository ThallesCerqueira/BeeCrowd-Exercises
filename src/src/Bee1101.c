#include <stdio.h>

int main() {

    int a, b, menor, maior, qtd = 0;
    
    do{
        
        scanf("%d %d", &a, &b);

        if(a > 0 && b > 0) {

            if(a < b) {
                menor = a;
                maior = b;
            } else {
                menor = b;
                maior = a;
            }

            while(menor <= maior) {

                printf("%d ", menor);
                qtd += menor;

                menor++;

            }

            printf("Sum=%d\n", qtd);

        }

        qtd = 0;

    }while(a > 0 && b >0);


    return 0;
}