#include <stdio.h>

void troca(double *x, double *y){
    double aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (b > a && b > c){
        troca(&a, &b);
    }
    if (c > a && c > b){
        troca(&a, &c);
    }

    if (a < b + c){
        printf("Perimetro = %.1lf\n", a + b + c);
    }
    else {
        printf("Area = %.1lf\n", ((a + b) * c) / 2);
    }

    return 0;
}