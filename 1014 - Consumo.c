#include <stdio.h>
 
int main() {
 
    int km = 0;
    double l = 0.0;

    scanf("%d", &km);
    scanf("%lf", &l);

    double kml = (km / l);

    printf("%.3lf km/l\n", kml);

    return 0;
}