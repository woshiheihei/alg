#include <stdio.h>

int fn(int x);

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", fn(n));

  return 0;
}

int fn(int x) {
  if (x <= 0) return 0;
  if (x == 1) return 1;
  if (x > 1 && x % 2 == 0) return 3 * fn(x / 2) - 1;
  if (x > 1 && x % 2 == 1) return 3 * fn((x + 1) / 2) - 1;
  return 0;
}