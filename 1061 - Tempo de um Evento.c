#include <stdio.h>

int main() {

  int d1, h1, m1, s1, d2, h2, m2, s2;
  scanf("Dia %d\n", &d1);
  scanf("%d : %d : %d\n", &h1, &m1, &s1);
  scanf("Dia %d\n", &d2);
  scanf("%d : %d : %d", &h2, &m2, &s2);

  int total1 = d1 * 86400 + h1 * 3600 + m1 * 60 + s1;
  int total2 = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;

  int dias = (total2 - total1) / 86400;
  int horas = (total2 - total1) % 86400 / 3600;
  int minutos = (total2 - total1) % 86400 % 3600 / 60;
  int segundos = (total2 - total1) % 86400 % 3600 % 60;
  
  printf("%d dia(s)\n", dias);
  printf("%d hora(s)\n", horas);
  printf("%d minuto(s)\n", minutos);
  printf("%d segundo(s)\n", segundos);
  
  return 0;
}