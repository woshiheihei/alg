#include "stdio.h"

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int k = i; k <= n; k++) {
      k == i || printf("\t");
      printf("%d*%d=%d", i, k, i * k);
    }
    printf("\n");
  }

  return 0;
}