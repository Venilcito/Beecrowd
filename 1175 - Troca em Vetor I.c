#include <stdio.h>

int main(){

    int vetor[20];

    for(int i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, vetor[19 - i]);
    }

    return 0;
}