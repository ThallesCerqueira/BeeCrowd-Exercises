#include <stdio.h>

int main() {

    int n, a, in, out;

    in = out = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(a >= 10 && a <= 20){
            in++;
        }else{
            out++;
        }
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}