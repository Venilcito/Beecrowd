#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#define MAXN 1000000

int main(){

    char linha[MAXN];
    
    while(fgets(linha, sizeof(linha), stdin) != NULL){
        bool aliteracao = false;
        char anterior = tolower(linha[0]);
        int tamanho = strlen(linha), contador = 0;

        for(int i = 1; i < tamanho; i++){
            if(linha[i - 1] == ' '){
                char atual = tolower(linha[i]);

                if(atual == anterior){
                    if(!aliteracao){
                        aliteracao = true;
                        contador++;
                    }
                } else{
                    aliteracao = false;
                    anterior = atual;
                }
            }
        }

        printf("%d\n", contador);
    }

    return 0;
}