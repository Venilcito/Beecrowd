#include <stdio.h>

int main(){

    int a = 0;
    int b = 0;
    double c = 0.00;
    int d = 0;
    int e = 0;
    double f = 0.00;

    scanf("%d %d %lf", &a, &b, &c);
    scanf("%d %d %lf", &d, &e, &f);

    double total = (b * c + e * f);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}