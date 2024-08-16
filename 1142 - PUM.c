#include <stdio.h>

int main(){

    int rep;
    scanf("%d", &rep);

    for(int i = 1; i <= rep * 4; i += 4){
        printf("%d %d %d PUM\n", i, i + 1, i + 2);
    }

    return 0;
}