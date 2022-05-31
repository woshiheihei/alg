#include "stdio.h"

int main() {
  int a = 0, b = 0;

  scanf("%d", &a);

  while (a) {
    b = b * 10 + a % 10;
    a /= 10;
  }

  printf("%d\n", b);

  return 0;
}