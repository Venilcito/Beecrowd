#include <stdio.h>

int main(){

    double s = 1, i, n = 2;

    for(i = 3; i <= 39; i += 2){
        s += i / n;
        n = n * 2;
    }

    printf("%.2lf\n", s);

    return 0;
}