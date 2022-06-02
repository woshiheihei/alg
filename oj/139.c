#include "stdio.h"

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n - i; j++) printf(" ");
    for (int k = 0; k < 2 * i; k++) printf("A");
    printf("\n");
  }

  for (int i = 1; i <= n - 1; i++) {
    for (int j = 0; j < i; j++) printf(" ");
    for (int k = 0; k < 2 + 2 * (n - 1 - i); k++) printf("A");
    printf("\n");
  }

  return 0;
}