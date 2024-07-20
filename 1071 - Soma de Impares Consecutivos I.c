#include <stdio.h>

int main(){

  int a, b, i, soma = 0;
  scanf("%d %d", &a, &b);
  
  if(b < a){
    int aux;
    aux = a;
    a = b;
    b = aux;
  }

  for(i = a + 1; i < b; i++){
    if(i % 2 != 0){
      soma += i;
    }
  }
  printf("%d\n", soma);

  return 0;
}