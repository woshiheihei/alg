#include "stdio.h"

int main() {
  int n, res = 0;
  scanf("%d", &n);
  while (n) {
    res += n % 10;
    n /= 10;
  }

  printf("%d\n", res);
  return 0;
}