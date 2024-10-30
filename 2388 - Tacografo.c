#include <stdio.h>

int main(){

    int rep, t, v, km = 0;
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        scanf("%d %d", &t, &v);
        km += t * v;
    }

    printf("%d\n", km);

    return 0;
}