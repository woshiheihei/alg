#include <math.h>
#include <stdio.h>

int main() {
  double x;
  scanf("%lf", &x);
  // 注意：如果写成 1/3 在c语言中为0
  printf("%lf", pow(x, 1.0 / 3));

  return 0;
}