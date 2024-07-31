#include <stdio.h>

int main(){

    double ent1, ent2;
    scanf("%lf", &ent1);

    while(ent1 < 0 || ent1 > 10){
        printf("nota invalida\n");
        scanf("%lf", &ent1);
    }
    double nota1 = ent1;

    scanf("%lf", &ent2);

    while(ent2 < 0 || ent2 > 10){
        printf("nota invalida\n");
        scanf("%lf", &ent2);
    }
    double nota2 = ent2;

    printf("media = %.2lf\n", (nota1 + nota2) / 2.0);

    return 0;
}