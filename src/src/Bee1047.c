#include <stdio.h>

int main() {

    int a, b, c, d, h, m;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a == c && b == d) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        // Calcula a diferença total em minutos
        int minutes_a = a * 60 + b;
        int minutes_c = c * 60 + d;

        // Calcula a diferença em minutos e converte para horas e minutos
        int diff_minutes = (minutes_c - minutes_a + 24 * 60) % (24 * 60);
        h = diff_minutes / 60;
        m = diff_minutes % 60;
        
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }

    return 0;
}
