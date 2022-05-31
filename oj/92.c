#include "stdio.h"

int main(){
  double r;
  scanf("%lf", &r);

  printf("%.2f\n", 2 * 3.14 * r);
  printf("%.2f\n", 3.14 * r * r);
  return 0;
}