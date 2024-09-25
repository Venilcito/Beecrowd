#include <stdio.h>

int main() {
    int rep;
    scanf("%d", &rep);

    int vetor[rep];
    for(int i = 0; i < rep; i++){
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < rep - 1; i++){
        for(int j = 0; j < rep - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    int repetido = 1;
    for(int i = 0; i < rep; i++){
        if(vetor[i + 1] == vetor[i]){
            repetido++;
        } else{
            printf("%d aparece %d vez(es)\n", vetor[i], repetido);
            repetido = 1;
        }
    }

    return 0;
}