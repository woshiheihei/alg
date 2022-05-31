#include "stdio.h"

int main() {
  int a;
  int b = 0;
  scanf("%d", &a);
  int n = a;
  int tmp = 0;
  while (n) {
    b = b * 10 + n % 10;
    n /= 10;
  }
  while (b) {
    printf("%d\n", b % 10);
    b /= 10;
  }
  return 0;
}