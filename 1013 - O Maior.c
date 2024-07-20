#include <stdio.h>
 
int main() {
 
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d %d %d", &a, &b, &c);

    int d = ((a + b + abs(a - b)) / 2);
    int maior = ((d + c + abs(d - c)) / 2);

    printf("%d eh o maior\n", maior);

 
    return 0;
}