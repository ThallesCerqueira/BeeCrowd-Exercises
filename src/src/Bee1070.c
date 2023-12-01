#include <stdio.h>

int main() {

    int a;

    scanf("%d", &a);

    for(int i = 0; i < 6; ) {

        if(a % 2 == 1) {
            printf("%d\n", a);
            i++;
        }

        a++;

    }



    return 0;
}