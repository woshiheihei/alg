#include "stdio.h"

int main() {
  char str[100] = {0};
  scanf("%s", str);
  char res = 0;
  for (int i = 0; str[i]; i++) {
    str[i] == 'A' && res++;
  }
  printf("%d\n", res);

  return 0;
}