#include <stdio.h>

int main(){

    int cha, tentativas[5], contador = 0;
    scanf("%d", &cha);

    for(int i = 0; i < 5; i++){
        scanf("%d", &tentativas[i]);
        
        if(tentativas[i] == cha){
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}