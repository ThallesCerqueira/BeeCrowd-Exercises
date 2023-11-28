#include <stdio.h>

int main() {

    int a, b, cont;
    cont = 0;

    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else {
        cont = (b - a + 24) % 24;
        printf("O JOGO DUROU %d HORA(S)\n", cont);
    }

    return 0;
}
