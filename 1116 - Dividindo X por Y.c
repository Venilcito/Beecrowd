#include <stdio.h>

int main(){

    double x, y;
    int rep;
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        scanf("%lf %lf", &x, &y);

        if(isinf(x / y)){
            printf("divisao impossivel\n");
        } else{
            printf("%.1lf\n", x / y);
        }
    }

    return 0;
}