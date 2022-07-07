#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        printf("%d %d %d\n", i, j, k);
      }
    }
  }

  return 0;
}