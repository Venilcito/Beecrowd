#include <stdio.h>

int main(){

    int a, fatorial = 1;
    scanf("%d", &a);

    while(a >= 1){
        fatorial = a * fatorial;
        a--;
    }

    printf("%d\n", fatorial);

    return 0;
}