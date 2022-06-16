#include <stdio.h>
#define MAX_NUM 50

int fn(int n);

int buffer[MAX_NUM] = {0};

int main() {
  int n;
  scanf("%d", &n);

  printf("%d\n", fn(n));

  return 0;
}

int fn(int n) {
  if (n == 1) return 0;
  if (n == 2 || n == 3) return 1;
  return fn(n - 2) + fn(n - 3);
}