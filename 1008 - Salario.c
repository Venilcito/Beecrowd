#include <stdio.h>

int main(){

    int a = 0;
    int b = 0;
    double c = 0.00;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);

    double salario = (b * c);
    
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}