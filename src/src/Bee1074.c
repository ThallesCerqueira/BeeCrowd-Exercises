#include <stdio.h>

int main() {

    int n, a;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        scanf("%d", &a);

        if(a != 0){

            if(a % 2 == 0 ) {
                printf("EVEN ");

            } else {
                printf("ODD ");
            }

            if( a > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }

        } else {
            printf("NULL\n");
        }

    }


    return 0;
}