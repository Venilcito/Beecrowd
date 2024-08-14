#include <stdio.h>

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    if(b > a){
        int aux;
        aux = b;
        b = a;
        a = aux;
    }

    while(b < a){
        b++;
        if((b % 5 == 2 || b % 5 == 3) && b != a){
            printf("%d\n", b);
        }
    }

    return 0;
}