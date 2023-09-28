#include <stdio.h>

int main() {

    int n, hrs, min, seg, aux;

    scanf("%d", &n);

    hrs = n / 3600;
    aux = n % 3600;

    min = aux / 60;

    seg = aux % 60;

    printf("%d:%d:%d\n", hrs, min, seg);

    return 0;
}