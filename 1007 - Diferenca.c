#include <stdio.h>

int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    int menos = (a * b - c * d);

    printf("DIFERENCA = %d\n", menos);

    return 0;
}