#include <stdio.h>

int main() {

    int a, par, imp, pos, neg;

    par = imp = pos = neg = 0;

    for(int i = 0; i < 5; i++) {

        scanf("%d", &a);

        if( a %2 == 0) {
            par++;
        } else {
            imp++;
        }

        if(a > 0) {
            pos++;
        } else if(a < 0) {
            neg++;
        }

    
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}