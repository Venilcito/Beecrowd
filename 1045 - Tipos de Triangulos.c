#include <stdio.h>

void swap(double *x, double *y){
    double aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(void){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (b > a && b > c){
        swap(&a, &b);
    }
    if (c > a && c > b){
        swap(&a, &c);
    }

    if (a < (b + c)){
        if (a * a == b * b + c * c){
            printf("TRIANGULO RETANGULO\n");
        }
        if (a * a > b * b + c * c){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (a * a < b * b + c * c){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else {
        printf("NAO FORMA TRIANGULO\n");
    };

    return 0;
}