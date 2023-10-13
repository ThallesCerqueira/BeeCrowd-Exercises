#include <stdio.h>

void fail();

int main() {

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if( b > c ) {
        if(d > a) {
            if(c + d > a + b) {
                if(c > 0 && d > 0) {
                    if(a % 2 == 0){
                        printf("Valores aceitos\n");
                    } else fail();
                } else fail();
            } else fail();
        } else fail();
    }else fail();


    return 0;
}

void fail() {
    printf("Valores nao aceitos\n");
}