#include <stdio.h>

int main() {

    int n, qtd, qtdCoe, qtdRat, qtdSap, qtdTot;
    float perCoe, perRat, perSap;
    char tipo;

    qtdCoe = qtdRat = qtdSap = qtdTot = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        scanf("%d %c", &qtd, &tipo);

        if(tipo == 'C') {
            qtdCoe += qtd;
        } else if(tipo == 'R') {
            qtdRat += qtd;
        } else {
            qtdSap += qtd;
        }

        qtdTot += qtd;

    }

    perCoe = (qtdCoe * 100.0) / qtdTot;
    perRat = (qtdRat * 100.0) / qtdTot;
    perSap = (qtdSap * 100.0) / qtdTot;

    printf("Total: %d cobaias\n", qtdTot);
    printf("Total de coelhos: %d\n", qtdCoe);
    printf("Total de ratos: %d\n", qtdRat);
    printf("Total de sapos: %d\n", qtdSap);
    printf("Percentual de coelhos: %.2f %%\n", perCoe);
    printf("Percentual de ratos: %.2f %%\n", perRat);
    printf("Percentual de sapos: %.2f %%\n", perSap);

    return 0;
}