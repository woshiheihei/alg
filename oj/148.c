#include "stdio.h"

int main() {
  char str[100] = {0};
  int len = 0;
  scanf("%s", str);
  for (int i = 0; str[i]; i++) len++;
  for (int j = len; j > 0; j--) {
    printf("%c", str[j - 1]);
  }
  printf("\n");
  return 0;
}