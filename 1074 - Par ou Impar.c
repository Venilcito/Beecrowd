#include <stdio.h>

int main(){

  int rep, a, i;
  scanf("%d", &rep);

  for(i = 0; i < rep; i++){
    scanf("%d", &a);

    if(a == 0){
      printf("NULL\n");
    }
    else{
      if(a % 2 == 0){
        printf("EVEN ");
      }
      else{
        printf("ODD ");
      }
      if(a < 0){
        printf("NEGATIVE\n");
      }
      else{
        printf("POSITIVE\n");
      }
    }
  }

  return 0;
}