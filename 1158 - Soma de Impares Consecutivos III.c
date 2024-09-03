#include <stdio.h>

int main(){

    int rep;
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        int a, b, rep2 = 0, soma = 0;
        scanf("%d %d", &a, &b);

        while(rep2 < b){
            if(a % 2 != 0){
                soma += a;
                rep2++;
            }
            a++;
        }

        printf("%d\n", soma);
    }

    return 0;
}