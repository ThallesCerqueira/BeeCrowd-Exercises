#include <stdio.h>

int menor(int a, int b);
int maior(int a, int b);

int main() {

    int a, b, aux, aux2, cont;
    cont = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    aux = menor(a, b) + 1;
    aux2 = maior(a,b);
    
    if(a == b) {
        printf("0\n");
    } else {

        while(aux < aux2) {

            if(aux % 2 != 0){
                cont += aux;
            }

            aux++;

        }  // verificar condicao de parada;
    
        printf("%d\n", cont);
    }


    return 0;
}

int menor(int a, int b) {
    if(a < b) return a;

    return b;
}

int maior(int a, int b) {

    if(a > b) return a;

    return b;
}