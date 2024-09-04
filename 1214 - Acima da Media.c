#include <stdio.h>

int main(){

    int rep;
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        int quant;
        double media = 0, acima = 0;
        scanf("%d", &quant);
        int nota[quant];

        for(int j = 0; j < quant; j++){
            scanf("%d", &nota[j]);
            media += nota[j];
        }

        media = media / quant;
        for(int k = 0; k < quant; k++){
            if(nota[k] > media){
                acima++;
            }
        }

        printf("%.3lf%%\n", (acima / quant) * 100);
    }

    return 0;
}