#include <stdio.h>

int main() {

    int vet[3], cp[3], var;

    scanf("%d %d %d", &vet[0], &vet[1], &vet[2]);

    for(int i = 0; i < 3; i++) {
        cp[i] = vet[i];
    }

    for(int j = 0; j < 2; j++) {
        for(int i = 0; i < 2; i++) {

            if(cp[i] > cp[i+1]){
              var = cp[i+1];
             cp[i+1] = cp[i];
             cp[i] = var;
            }
        }
        
    }

    for(int i = 0; i< 3; i++){
        printf("%d\n", cp[i]);
    }

    printf("\n");

    for(int i = 0; i< 3; i++){
        printf("%d\n", vet[i]);
    }


    return 0;
}