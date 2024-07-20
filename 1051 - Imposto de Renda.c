#include <stdio.h>

int main(){
    
    double a;
    scanf("%lf",&a);

    if(a <= 2000){
        printf("Isento\n");
    }
    if(a > 2000 && a <= 3000){
        double b = ((a - 2000) * 0.08);
        printf("R$ %.2f\n",b);
    }
    if(a > 3000 && a <= 4500){
        double b = ((a - 3000) * 0.18) + 80;
        printf("R$ %.2f\n",b);
    }
    if(a > 4500){
        double b = ((a - 4500) * 0.28) + 350;
        printf("R$ %.2f\n",b);
    }

    return 0;
}