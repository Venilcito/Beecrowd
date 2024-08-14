#include <stdio.h>
#include <string.h>

int main(){

    int a, i = 0, ant2 = 0, ant = 1, b;
    scanf("%d", &a);

    (a >= 2) ? printf("%d %d ", ant2, ant) : printf("%d ", ant2);

    while(i < a - 2){
        b = ant2 + ant;
        ant2 = ant;
        ant = b;
        printf("%d", b);

        i++;
        (i == a - 2) ? printf("\n") : printf(" ");
    }

    return 0;
}