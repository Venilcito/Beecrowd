#include <stdio.h>

int main(){

    int a, b, soma = 0;
    scanf("%d %d", &a, &b);

    if(a > b){
        int aux;
        aux = a;
        a = b;
        b = aux;
    }

    while(a <= b){
        if(a % 13 != 0){
            soma += a;
        }
        a++;
    }

    printf("%d\n", soma);

    return 0;
}