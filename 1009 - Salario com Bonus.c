#include <stdio.h>

int main(){

    char a;
    double b = 0.00;
    double c = 0.00;

    scanf("%s", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    double comissao = (b + c * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", comissao);

    return 0;
}