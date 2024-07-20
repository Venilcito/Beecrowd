#include <stdio.h>

int main(){

    double a = 0.0;
    double pi = 3.14159;

    scanf("%lf", &a);

    double volume = ((4 / 3.0) * pi * a * a * a);
    
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}