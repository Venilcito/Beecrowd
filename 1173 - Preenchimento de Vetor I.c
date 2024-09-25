#include <stdio.h>

int main(){

    int n[10];
    scanf("%d", &n[0]);

    for(int i = 1; i < 10; i++){
        n[i] = n[i - 1] * 2;

        printf("N[%d] = %d\n", i - 1, n[i - 1]);
    }

    printf("N[9] = %d\n", n[9]);

    return 0;
}