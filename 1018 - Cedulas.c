#include <stdio.h>

int main() {
    
   int a;
   scanf("%d", &a);

   int cem = (a / 100);
   int cinq = ((a % 100) / 50);
   int vint = (((a % 100) % 50) / 20);
   int dez = ((((a % 100) % 50) % 20) / 10);
   int cinc = (((((a % 100) % 50) % 20) % 10) / 5);
   int dois = ((((((a % 100) % 50) % 20) % 10) % 5) / 2);
   int um = (a - (cem * 100 + cinq * 50 + vint * 20 + dez * 10 + cinc * 5 + dois * 2));

   printf("%d\n", a);
   printf("%d nota(s) de R$ 100,00\n", cem);
   printf("%d nota(s) de R$ 50,00\n", cinq);
   printf("%d nota(s) de R$ 20,00\n", vint);
   printf("%d nota(s) de R$ 10,00\n", dez);
   printf("%d nota(s) de R$ 5,00\n", cinc);
   printf("%d nota(s) de R$ 2,00\n", dois);
   printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}