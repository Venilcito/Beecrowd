#include <stdio.h>

int main(){

  int a, i, quad, par = 0;
  scanf("%d", &a);

  if(a % 2 != 0){
    a++;
  }

  for(i = 2; i <= a; i += 2){
    quad = i * i;
    printf("%d^2 = %d\n", i, quad);
  }

  return 0;
}