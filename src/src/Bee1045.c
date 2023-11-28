#include <stdio.h>

int main() {

    double a, b,c, vet[3], var;

    scanf("%lf %lf %lf", &a, &b, &c);

    vet[0] = a;
    vet[1] = b;
    vet[2] = c;

    for(int j = 0; j < 2; j++) {
        for(int i = 0; i < 2; i++) {
            if(vet[i] > vet[i+1]){
              var = vet[i+1];
              vet[i+1] = vet[i];
              vet[i] = var;
            }
        }
        
    }

    a = vet[2];
    b = vet[1];
    c = vet[0];


    if(a >= (b+c)) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    if ((a*a) == (b*b + c*c))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    
    if(a*a > (b*b + c*c)) {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    if(a*a < (b*b + c*c)) {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(a == b && a == c && b == c) {
        printf("TRIANGULO EQUILATERO\n");
    } else if(a == b || a == c || b == c ) {
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}