#include "stdio.h"

int main() {
  double m, n;
  char c;
  scanf("%c", &c);
  scanf("%lf%lf", &m, &n);

  printf("%.2f\n", c == 'r' ? m * n : (m * n) / 2);

  return 0;
}