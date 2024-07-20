#include <stdio.h>
 
int main() {
 
    int x = 0;
    
    while (1){
        scanf("%d", &x);
        if (x == 0){
            break;
        }
        
        int saida = 0;

        for(int i = 1; i<=x; i++){
        saida += i * i;
    }

    printf("%d\n", saida);
    }
 
    return 0;
}