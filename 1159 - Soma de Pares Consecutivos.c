#include <stdio.h>

int main(){

    int x = 1;

    while(1){
        int soma = 0;
        scanf("%d", &x);

        if(x == 0){
            break;
        }
        if(x % 2 != 0){
            x += 1;
        }

        for(int i = x; i < x + 10; i += 2){
            soma += i;
        }

        printf("%d\n", soma);
    }

    return 0;
}