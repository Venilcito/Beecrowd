#include <stdio.h>

int main(){

    double fibonacci[60];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    int rep;
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        int n;
        scanf("%d", &n);

        for(int j = 2; j <= n; j++){
            fibonacci[j] = fibonacci[j - 1] + fibonacci[j - 2];
        }

        printf("Fib(%d) = %.0lf\n", n, fibonacci[n]);
    }

    return 0;
}