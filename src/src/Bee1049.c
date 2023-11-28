#include <stdio.h>
#include <string.h>

int main() {

    char p[12], s[11], t[11];

    scanf("%s", p);
    scanf("%s", s);
    scanf("%s", t);

    if(strcmp(p, "vertebrado") == 0) {
        
        if(strcmp(s, "ave")== 0) {

            if(strcmp(t, "carnivoro") == 0) {
                printf("aguia\n");
            } else if(strcmp(t, "onivoro")== 0) {
                printf("pomba\n");
            }

        } else if(strcmp(s, "mamifero")== 0) {

            if(strcmp(t, "herbivoro")== 0) {
                printf("vaca\n");
            } else if(strcmp(t, "onivoro")== 0) {
                printf("homem\n");
            }

        }
        
    } else if(strcmp(p, "invertebrado") == 0) {
        
        if(strcmp(s, "inseto")== 0) {

            if(strcmp(t, "hematofago")== 0) {
                printf("pulga\n");
            } else if(strcmp(t, "herbivoro")== 0) {
                printf("lagarta\n");
            }

        } else if(strcmp(s, "anelideo")== 0) {

            if(strcmp(t, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else if(strcmp(t, "onivoro") == 0) {
                printf("minhoca\n");
            }

        }
        
    }

    return 0;

}