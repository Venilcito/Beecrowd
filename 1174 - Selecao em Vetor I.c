#include <stdio.h>

int main(){

    double vetor[100], menores[100];
    int tamanho = 0, posicoes[100];

    for(int i = 0; i < 100; i++){
        scanf("%lf", &vetor[i]);

        if(vetor[i] <= 10){
            menores[tamanho] = vetor[i];
            posicoes[tamanho] = i;
            tamanho++;
        }
    }

    for(int i = 0; i < tamanho; i++){
        printf("A[%d] = %.1lf\n", posicoes[i], menores[i]);
    }

    return 0;
}