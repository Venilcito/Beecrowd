#include <stdio.h>

int main(){
    
    int rep;
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        int a, soma = 0;
        scanf("%d", &a);
    
        for(int j = 1; j < a; j++){
            if(a % j == 0){
                soma += j;
            }
        }
    
        if(soma == a){
            printf("%d eh perfeito\n", a);
        } else{
            printf("%d nao eh perfeito\n", a);
        }
    }

    return 0;
}