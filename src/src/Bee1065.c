#include <stdio.h>

int main() {

    int a, cont;

    cont = 0;

    for(int i = 0; i < 5; i++) {

        scanf("%d", &a);

        if( a %2 == 0) {
            cont++;
        }

    
    }

    printf("%d valores pares\n", cont);

    return 0;
}