#include <stdio.h>

int main(){

    double x = 0;

    scanf("%lf", &x);

    double pi = 3.14159;

    double area = pi * x * x;

    printf("A=%.4lf\n", area);

    return 0;
}