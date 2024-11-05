#include <stdio.h>

int main(){

    int rep, k, n;
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        scanf("%d %d", &n, &k);

        int pos = 0;
        for (int j = 1; j < n; j++) {
            pos = (pos + k) % (j + 1);
        }

        printf("Case %d: %d\n", i + 1, pos + 1);
    }

    return 0;
}