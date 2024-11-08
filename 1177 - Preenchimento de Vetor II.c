#include <stdio.h>
#include <math.h>

int main(){

    int a, vetor[1000];
    scanf("%d", &a);

    int b = (int)ceil(1000.0/a);

    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            vetor[i * a + j] = j;
            printf("N[%d] = %d\n", i * a + j, vetor[i * a + j]);

            if(i * a + j == 999){
                break;
            }
        }
    }

    return 0;
}