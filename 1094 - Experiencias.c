#include <stdio.h>
#include <string.h>

int main(){

  int rep, quant;
  char bicho[2];
  int total = 0, c = 0, r = 0, s = 0;

  scanf("%d", &rep);

  for(int i = 1; i <= rep; i++){
    scanf("%d %s", &quant, bicho);
    total = total + quant;

    if(strcmp(bicho, "C") == 0){
      c = c + quant;
    }
    if(strcmp(bicho, "R") == 0){
      r = r + quant;
    }
    if(strcmp(bicho, "S") == 0){
      s = s + quant;
    }
  }

  double pc = ((double)c / (double)total) * 100;
  double pr = ((double)r / (double)total) * 100;
  double ps = ((double)s / (double)total) * 100;
  
  printf("Total: %d cobaias\n", total);
  printf("Total de coelhos: %d\n", c);
  printf("Total de ratos: %d\n", r);
  printf("Total de sapos: %d\n", s);
  printf("Percentual de coelhos: %.2lf %%\n", pc);
  printf("Percentual de ratos: %.2lf %%\n", pr);
  printf("Percentual de sapos: %.2lf %%\n", ps);

  return 0;
}