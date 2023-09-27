#include <stdio.h>

int main() {

    int h, v;
    double gasto;

    scanf("%d", &h);
    scanf("%d", &v);

    gasto = h * v / 12.0;

    printf("%.3f\n", gasto);

    return 0;
}