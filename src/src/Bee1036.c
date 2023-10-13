#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, inter, R1, R2;

    scanf("%lf %lf %lf", &a, &b, &c);

    inter = (b * b) - 4 * a * c;

    if(inter >= 0 && a != 0) {
        R1 = (sqrt(inter) - b) / (2 * a);
        R2 = (-b - sqrt(inter)) / (2 * a);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);

    }else printf("Impossivel calcular\n");

    return 0;
}