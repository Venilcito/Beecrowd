#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int ano = a / 365;
    int mes = (a % 365) / 30;
    int dia = (a % 365) % 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
   
    return 0;
}