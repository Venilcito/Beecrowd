#include <stdio.h>
#include <math.h>

int main(){

    double r1, x1, y1, r2, x2, y2;
    
    while(scanf("%lf %lf %lf %lf %lf %lf", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){
        double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        if((d + r2) <= r1){
            printf("RICO\n");
        } else {
            printf("MORTO\n");
        }
    }

    return 0;
}