#include <stdio.h>

int main() {

    int n, qtdCem, qtdCinq, qtdVin, qtdDez, qtdCinc, qtdDois, qtdUm, aux;

    scanf("%d", &n);

    if( n < 0 || n >= 1000000 ) return 0;

    qtdCem = n / 100;
    aux = n % 100;

    qtdCinq = aux / 50;
    aux %= 50;

    qtdVin = aux / 20;
    aux %= 20;

    qtdDez = aux / 10;
    aux %= 20;

    qtdCinc = aux / 5;
    aux %= 5;

    qtdDois = aux / 2;
    aux %= 2;

    qtdUm = aux;

    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", qtdCem);
    printf("%d nota(s) de R$ 50,00\n", qtdCinq);
    printf("%d nota(s) de R$ 20,00\n", qtdVin);
    printf("%d nota(s) de R$ 10,00\n", qtdDez);
    printf("%d nota(s) de R$ 5,00\n", qtdCinc);
    printf("%d nota(s) de R$ 2,00\n", qtdDois);
    printf("%d nota(s) de R$ 1,00\n", qtdUm);

    return 0;
}