#include <stdio.h>

int main(){

    int codigo = 0;
    int a = 0;
    double total = 0.00;

    scanf("%d %d", &codigo, &a);

    if (codigo == 1){
        total = (a * 4);
    }
    if (codigo == 2){   
        total = (a * 4.50);
    }
    if (codigo == 3){
        total = (a * 5);
    }
    if (codigo == 4){
        total = (a * 2);
    }
    if (codigo == 5){
        total = (a * 1.50);
    }

    printf("Total: R$ %.2lf\n", total);

    return 0;
}