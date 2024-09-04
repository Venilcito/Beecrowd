#include <stdio.h>
#include <math.h>

int main(){
    
    int rep;
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        int casas;
        scanf("%d", &casas);

        double graos = pow(2, casas) / 12000;
        printf("%.0lf kg\n", trunc(graos));
    }

    return 0;
}