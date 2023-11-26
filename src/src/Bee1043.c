#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, area;

    scanf("%f %f %f", &a, &b, &c);

    if( (a < (b+c)) && (b < (a+c)) && (c < (a+b)) ) {
        area = a + b + c;
        printf("Perimetro = %.1f\n", area);
    }else{
        area = (a + b) * c / 2;
        printf("Area = %.1f\n", area); 
    }

   return 0;

}