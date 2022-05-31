#include "stdio.h"

int main() {
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  ((a <= c && b >= d) || (c <= a && b <= d)) ? printf("YES\n") : printf("NO\n");
  return 0;
}