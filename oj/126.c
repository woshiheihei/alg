#include "math.h"
#include "stdio.h"

int main() {
  double r1, r2;

  scanf("%lf%lf", &r1, &r2);
  printf("%.2f\n", 3.14 * (pow(r1, 2) - pow(r2, 2)));

  return 0;
}