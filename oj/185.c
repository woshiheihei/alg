#include <stdio.h>
int fn(int n);

int main() {
  int n;
  scanf("%d", &n);

  printf("%d\n", fn(n));

  return 0;
}

int fn(int n) {
  if (n == 1 || n == 2) return 1;
  return fn(n - 1) + fn(n - 2);
}