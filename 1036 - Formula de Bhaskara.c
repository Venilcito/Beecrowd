#include <stdio.h>
#include <math.h>
 
int main() {

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double d = ((b * b) - (4 * a * c));
    double x1 = (-b + sqrt(d)) / (2 * a);
    double x2 = (-b - sqrt(d)) / (2 * a);

    if (!(isinf(x1) || isinf(x2) || isnan(x1) || isnan(x2))){
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }

    else{
        printf("Impossivel calcular\n");
    }
   
    return 0;
}