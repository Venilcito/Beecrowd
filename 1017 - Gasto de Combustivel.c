#include <stdio.h>
 
int main() {
 
    int h;
    int v;

    scanf("%d", &h);
    scanf("%d", &v);

    double dist = (h * v);
    double litros = (dist / 12);

    printf("%.3lf\n", litros);

    return 0;
}