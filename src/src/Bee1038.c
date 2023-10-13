#include <stdio.h>

int main() {

    int cod, qtd;
    float pagar;

    scanf("%d %d", &cod, &qtd);

    if(cod == 1) {
        pagar = qtd * 4;
    } else if(cod == 2){
        pagar = qtd * 4.5;
    }else if(cod == 3){
        pagar = qtd * 5;
    }else if(cod == 4) {
        pagar = qtd * 2;
    }else {
        pagar = qtd * 1.5;
    }

    printf("Total: R$ %.2f\n", pagar);


    return 0;
}