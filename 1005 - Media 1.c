#include <stdio.h>

int main(){

    double a = 0.0;
    double b = 0.0;

    scanf("%lf", &a);
    scanf("%lf", &b);

    double media = ((a * 3.5) + (b * 7.5)) / 11;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}