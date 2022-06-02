#include "stdio.h"

int main() {
  int n;
  char tem = 'A' - 1;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    ++tem;
    for (int j = 0; j < n - i; j++) printf(" ");
    for (int k = 0; k < 2 * i - 1; k++) printf("%c", tem);
    printf("\n");
  }

  for (int i = 1; i <= n - 1; i++) {
    --tem;
    for (int j = 0; j < i; j++) printf(" ");
    for (int k = 0; k < 2 * (n - 1 - i) + 1; k++) printf("%c", tem);
    printf("\n");
  }

  return 0;
}