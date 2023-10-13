#include <stdio.h>

int main() {

    float a,b,c,d,media, exame;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    media = (a * 2 + b * 3 + c * 4 + d) / 10;

    printf("Media: %.1f\n", media);

    if( media >= 7) {
        printf("Aluno aprovado.\n");
    } else if(media < 5) {
        printf("Aluno reprovado.\n");
    } else {
        scanf("%f", &exame);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", exame);

        media = (media + exame) / 2;

        if(media >= 5) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media);

    }

    return 0;
}