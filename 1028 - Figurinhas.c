#include <stdio.h>

int main(){

    int rep, a, b;
    scanf("%d", &rep);

    for(int i = 1; i <= rep; i++){
        scanf("%d %d", &a, &b);

        while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
        }

        printf("%d\n", a);
    }

    return 0;
}