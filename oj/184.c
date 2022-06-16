#include <stdio.h>

int cnt(int n);

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", cnt(n));

  return 0;
}

int cnt(int n) {
  if (n == 1) return 1;

  return 2 + 2 * cnt(n - 1);
}