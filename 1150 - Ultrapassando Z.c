#include <stdio.h>

int main(){

    int x, i = 1;
    scanf("%d", &x);
    int z = x, aux = x;

    while(z <= x){
        scanf("%d", &z);
    }

    while(x <= z){
        x += aux + 1;
        i++;
        aux++;
    }

    printf("%d\n", i);

    return 0;
}