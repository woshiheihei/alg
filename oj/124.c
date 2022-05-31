#include <stdio.h>

int main() {
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);

  ((b <= 50 || a >= 1) && (c <= 25 || d >= 5)) ? printf("ok\n") : printf("pass\n");

  return 0;
}