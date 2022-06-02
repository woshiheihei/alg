#include <stdio.h>

int main() {
  int number;
  int count;
  scanf("%d", &number);
  count = number / 7;
  for (int i = 0; i < count; i++) {
    printf("%d\n", (i + 1) * 7);
  }

  return 0;
}