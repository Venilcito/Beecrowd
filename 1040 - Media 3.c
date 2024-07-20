#include <stdio.h>

int main(){

    float a;
    float b;
    float c;
    float d;
    float e;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    float media = ((a * 2 + b * 3 + c * 4 + d) / 10);

    printf("Media: %.1f\n", media);

    if (media >= 7){
        printf("Aluno aprovado.\n");
    }
    if (media < 5){
        printf("Aluno reprovado.\n");
    }
    if (media >= 5 && media <= 6.9){
        printf("Aluno em exame.\n");

        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);

        float recup = ((media + e) / 2);
        if (recup >= 5){
            printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", recup);
    }

    return 0;
}