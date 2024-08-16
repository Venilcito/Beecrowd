#include <stdio.h>

int main(){

    double idade = 0, total = 0, i = 0;

    while(1){
        scanf("%lf", &idade);

        if(idade < 0){
            printf("%.2lf\n", total / i);
            break;
        }

        total += idade;
        i++;
    }

    return 0;
}