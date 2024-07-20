#include <stdio.h>

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b){
        troca(&a, &b);
    }

    int multiplo = b % a;

    if (multiplo == 0){
        printf("Sao Multiplos\n");
    }
    else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}