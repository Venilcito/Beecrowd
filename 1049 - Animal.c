#include <stdio.h>
#include <string.h>

int main(){

    char um[20];
    char dois[20];
    char tres[20];

    scanf("%19s", um);
    scanf("%19s", dois);
    scanf("%19s", tres);
    
    if(strcmp(um, "vertebrado") == 0){
        if(strcmp(dois, "ave") == 0){
            if(strcmp(tres, "onivoro") == 0){
                printf("pomba\n");
            }
            if(strcmp(tres, "carnivoro") == 0){
                printf("aguia\n");
            }
        }
        if(strcmp(dois, "mamifero") == 0){
            if(strcmp(tres, "onivoro") == 0){
                printf("homem\n");
            }
            if(strcmp(tres, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }
    if(strcmp(um, "invertebrado") == 0){
        if(strcmp(dois, "inseto") == 0){
            if(strcmp(tres, "hematofago") == 0){
                printf("pulga\n");
            }
            if(strcmp(tres, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        if(strcmp(dois, "anelideo") == 0){
            if(strcmp(tres, "hematofago") == 0){
                printf("sanguessuga\n");
            }
            if(strcmp(tres, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}