#include <stdio.h>

int main() {

  int a, b, c, d, e;
  int pares = 0;
  
  scanf("%d", &a);
  if(a % 2 == 0){
    pares = pares + 1;
  }
  scanf("%d", &b);
  if(b % 2 == 0){
    pares = pares + 1;
  }
  scanf("%d", &c);
  if(c % 2 == 0){
    pares = pares + 1;
  }
  scanf("%d", &d);
  if(d % 2 == 0){
    pares = pares + 1;
  }
  scanf("%d", &e);
  if(e % 2 == 0){
    pares = pares + 1;
  }

  printf("%d valores pares\n", pares);
  
  return 0;
}