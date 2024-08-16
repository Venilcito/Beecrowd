#include <stdio.h>

int main(){

    int rep;
    scanf("%d", &rep);

    for(int i = 1; i <= rep; i++){
        printf("%d %d %d\n", i, i * i, i * i * i);
        printf("%d %d %d\n", i, i * i + 1, i * i * i + 1);
    }

    return 0;
}