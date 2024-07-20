#include <stdio.h>
 
int main() {
 
    int n;

    scanf("%d", &n);

    int h = (n / 3600);
    int m = (n / 60 - h * 60);
    int s = (n - (h * 3600 + m * 60));

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}