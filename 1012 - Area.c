#include <stdio.h>

int main(){

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    scanf("%lf %lf %lf", &a, &b, &c);

    double tri = ((a * c) / 2);
    double cir = (3.14159 * c * c);
    double trap = (((a + b) * c) / 2);
    double quad = (b * b);
    double ret = (a * b);
    
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);

    return 0;
}