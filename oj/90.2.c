#include "stdio.h"

int main() {
  int a;
  int b = 100;
  scanf("%d", &a);
  while (a) {
    printf("%d\n", a / b);
    a %= b;
    b /= 10;
  }
  return 0;
}