#include <stdio.h>

int main(){

    int rep, i;
    float a, b, c;
    scanf("%d",&rep);
    
    for(i = 0; i < rep; i++){
        scanf("%f %f %f",&a,&b,&c);

        float media = (a * 2 + b * 3 + c * 5) / 10;
        printf("%.1f\n",media);
    }

    return 0;
}