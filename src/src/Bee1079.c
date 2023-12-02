#include <stdio.h>

int main() {

    int n;
    float a, b, c;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        scanf("%f %f %f", &a, &b, &c);

        printf("%.1f\n", (a * 2 + b * 3 + c * 5) / 10);

    }

    return 0;
}