#include <stdio.h>

int main(){

    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int a = h1 * 60 + m1;
    int b = h2 * 60 + m2;

    if (b <= a){
        int c = (b + 1440);
        int hora = (c - a) / 60;
        int minuto = (c - a) % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    else{
        int hora = (b - a) / 60;
        int minuto = (b - a) % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    return 0;
}