#include <stdio.h>

int main(){

    double a;
    double aumento;
    scanf("%lf", &a);

    if (a <= 400){
        aumento = (a * 0.15);
    }
    if (a > 400 && a <= 800){
        aumento = (a * 0.12);
    }
    if (a > 800 && a <= 1200){
        aumento = (a * 0.1);
    }
    if (a > 1200 && a <= 2000){
        aumento = (a * 0.07);
    }
    if (a > 2000){
        aumento = (a * 0.04);
    }

    printf("Novo salario: %.2lf\n", a + aumento);
    printf("Reajuste ganho: %.2lf\n", aumento);
    printf("Em percentual: %.0lf %\n", (aumento / a) * 100);

    return 0;
}