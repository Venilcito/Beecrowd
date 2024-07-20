#include <stdio.h>

int main(){

  int rep, a, i, dentro = 0, fora = 0;
  scanf("%d", &rep);

  for(i = 0; i < rep; i++){
    scanf("%d", &a);
    if(a >= 10 && a <= 20){
      dentro++;
    }
    else{
      fora++;
    }
  }
  printf("%d in\n", dentro);
  printf("%d out\n", fora);

  return 0;
}