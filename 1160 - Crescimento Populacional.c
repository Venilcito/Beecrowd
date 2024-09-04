#include <stdio.h>

int main(){

    int rep;
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        int pa, pb, ano = 0;
        double ga, gb;
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);

        while(pa <= pb){
            pa += pa * (ga / 100);
            pb += pb * (gb / 100);
            ano++;

            if(ano > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(ano <= 100){
            printf("%d anos.\n", ano);
        }
    }

    return 0;
}