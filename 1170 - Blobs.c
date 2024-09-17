#include <stdio.h>

int main(){

    int rep;
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        double comida;
        scanf("%lf", &comida);

        int dias = 0;
        while(comida > 1){
            comida = comida / 2.0;
            dias++;
        }

        printf("%d dias\n", dias);
    }

    return 0;
}