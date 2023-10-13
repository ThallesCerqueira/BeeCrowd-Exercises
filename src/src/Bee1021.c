#include <stdio.h>
#include <math.h>

int main() {

    int n, qtdCem, qtdCinq, qtdVin, qtdDez, qtdCinc, qtdDois, qtdUm, qtdMUm, qtdMCinq, qtdMVin, qtdMDez, qtdMCin;
    double aux;

    scanf("%d", &n);

    if( n < 0 || n >= 1000000 ) return 0;

    qtdCem = n / 100;
    aux = n % 100;

    qtdCinq = aux / 50;
    aux = fmod( aux, 50 );

    qtdVin = aux / 20;
    aux = fmod( aux, 20 );

    qtdDez = aux / 10;
    aux = fmod( aux, 10 );

    qtdCinc = aux / 5;
    aux = fmod( aux, 5 );

    qtdDois = aux / 2;
    aux =  fmod( aux, 2 );

    qtdUm = aux / 1;
    aux = fmod( aux, 1.0 );

    qtdMCinq = aux * 100 / 50;
    aux = fmod( aux, 0.5 );

    qtdMVin = aux / 0.25 - 0.25;
    aux = fmod( aux, 0.25 );

    qtdMDez = aux / 0.10 - 0.10;
    aux =  fmod( aux, 0.10 );

    qtdMCin = aux / 0.05 - 0.05;
    aux = fmod( aux, 0.05 );

    qtdMUm = aux / 0.01;
    

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", qtdCem);
    printf("%d nota(s) de R$ 50.00\n", qtdCinq);
    printf("%d nota(s) de R$ 20.00\n", qtdVin);
    printf("%d nota(s) de R$ 10.00\n", qtdDez);
    printf("%d nota(s) de R$ 5.00\n", qtdCinc);
    printf("%d nota(s) de R$ 2.00\n", qtdDois);
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", qtdUm);
    printf("%d moeda(s) de R$ 0.50\n", qtdMCinq);
    printf("%d moeda(s) de R$ 0.25\n", qtdMVin);
    printf("%d moeda(s) de R$ 0.10\n", qtdMDez);
    printf("%d moeda(s) de R$ 0.05\n", qtdMCin);
    printf("%d moeda(s) de R$ 0.01\n", qtdMUm);

    return 0;
}