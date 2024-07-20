#include <stdio.h>

int main() {

  float a, b, c, d, e, f;
  int positivos = 0;
  
  scanf("%f", &a);
  if(a > 0){
    positivos = positivos + 1;
  }
  scanf("%f", &b);
  if(b > 0){
    positivos = positivos + 1;
  }
  scanf("%f", &c);
  if(c > 0){
    positivos = positivos + 1;
  }
  scanf("%f", &d);
  if(d > 0){
    positivos = positivos + 1;
  }
  scanf("%f", &e);
  if(e > 0){
    positivos = positivos + 1;
  }
  scanf("%f", &f);
  if(f > 0){
    positivos = positivos + 1;
  }

  printf("%d valores positivos\n", positivos);
  
  return 0;
}