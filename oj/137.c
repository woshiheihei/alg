#include <stdio.h>

int main() {
  int n;
  char tem = 'A' - 1;
  scanf("%d", &n);
  for (int i = n; i > 0; i--) {
    for (int j = 1; j <= i; j++) {
      tem = tem + 1;
      printf("%c", tem);
    }
    printf("\n");
  }

  return 0;
}