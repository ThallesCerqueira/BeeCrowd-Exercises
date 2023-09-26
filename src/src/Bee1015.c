#include <math.h>
#include <stdio.h>

int main() {

    double x1, y1, x2, y2, x2x1, y2y1, result;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    x2x1 = x2 - x1;
    y2y1 = y2 - y1;

    result = sqrt( (x2x1 * x2x1 + y2y1 * y2y1) );

    printf("%.4lf\n", result);

    return 0;
}