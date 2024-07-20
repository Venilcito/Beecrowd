#include <stdio.h>

int main(){

  int a, i;
  scanf("%d", &a);

  if(a % 2 == 0){
    a = a + 1;
  }

  for(i = a; i <= a + 10; i += 2){
    printf("%d\n", i);
  }

  return 0;
}