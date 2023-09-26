#include <stdio.h>

int abss( int a, int b );

int main() {

    int a, b, c, maiorAb, maiorC;

    scanf("%d %d %d", &a, &b, &c);

    maiorAb = (a + b + abss(a,b)) / 2;
    maiorC = (maiorAb + c + abss(maiorAb, c)) / 2;

    printf("%d eh o maior\n", maiorC);

    return 0;
}

int abss( int a, int b ) {
    int c = a - b;
    if(c >= 0) return c;
    return c * - 1;
}