#include <stdio.h>

int main(){

    int par[5], impar[5], valor;
    int pospar = 0, posimp = 0;

    for(int i = 0; i < 15; i++){
        scanf("%d", &valor);

        if(valor % 2 == 0){
            par[pospar] = valor;
            pospar++;
        } else{
            impar[posimp] = valor;
            posimp++;
        }

        if(pospar == 5){
            pospar = 0;
            for(int j = 0; j < 5; j++){
                printf("par[%d] = %d\n", j, par[j]);
            }
        }
        if(posimp == 5){
            posimp = 0;
            for(int j = 0; j < 5; j++){
                printf("impar[%d] = %d\n", j, impar[j]);
            }
        }
    }

    for(int k = 0; k < posimp; k++){
        printf("impar[%d] = %d\n", k, impar[k]);
    }
    for(int k = 0; k < pospar; k++){
        printf("par[%d] = %d\n", k, par[k]);
    }

    return 0;
}