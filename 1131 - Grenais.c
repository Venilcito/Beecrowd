#include <stdio.h>

int main(){

    int rep = 1, i = 0, vitI = 0, vitG = 0, emp = 0;

    while(rep == 1){
        i++;

        int inter, gremio;
        scanf("%d %d", &inter, &gremio);

        if(inter > gremio){
            vitI++;
        } else if(gremio > inter){
            vitG++;
        } else{
            emp++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &rep);
    }

    printf("%d grenais\n", i);
    printf("Inter:%d\n", vitI);
    printf("Gremio:%d\n", vitG);
    printf("Empates:%d\n", emp);

    if(vitI > vitG){
        printf("Inter venceu mais\n");
    } else if(vitG > vitI){
        printf("Gremio venceu mais\n");
    } else{
        printf("Nao houve vencedor\n");
    }

    return 0;
}