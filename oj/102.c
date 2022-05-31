#include "stdio.h"

int main() {
  float a, b, c, t;
  double t2;
  scanf("%f%f%f%f", &a, &b, &c, &t);
  t2 = (1 - ((1 / a) + (1 / b)) * t) / ((1 / a) + (1 / b) - (1 / c));
  printf("%.2f\n",  t + t2);

  return 0;
}