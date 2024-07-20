#include <stdio.h>

int main() {

  float a, b, c, d, e, f;
  float positivos = 6;
  
  scanf("%f", &a);
  if(a < 0){
    positivos = positivos - 1;
    a = 0;
  }
  scanf("%f", &b);
  if(b < 0){
    positivos = positivos - 1;
    b = 0;
  }
  scanf("%f", &c);
  if(c < 0){
    positivos = positivos - 1;
    c = 0;
  }
  scanf("%f", &d);
  if(d < 0){
    positivos = positivos - 1;
    d = 0;
  }
  scanf("%f", &e);
  if(e < 0){
    positivos = positivos - 1;
    e = 0;
  }
  scanf("%f", &f);
  if(f < 0){
    positivos = positivos - 1;
    f = 0;
  }

  printf("%d valores positivos\n", (int)positivos);
  printf("%.1f\n", (a + b + c + d + e + f) / positivos);
  
  return 0;
}