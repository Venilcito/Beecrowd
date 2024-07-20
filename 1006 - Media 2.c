#include <stdio.h>

int main(){

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    double media = ((a * 2) + (b * 3) + (c * 5)) / 10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}