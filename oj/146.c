#include "stdio.h"

int main() {
  char str[60] = {0};
  scanf("%s", str);

  for (int i = 0; str[i]; i++) {
    //   判断是大写字母还是小写字母
    if (str[i] - 'A' >= 0 && str[i] - 'A' < 26) {
      printf("%c", 'A' + (str[i] - 'A' + 1) % 26);
    } else if (str[i] - 'a' >= 0 && str[i] - 'a' < 26) {
      printf("%c", 'a' + (str[i] - 'a' + 1) % 26);
    } else {
      printf("%c", str[i]);
    }
  }

  printf("\n");

  return 0;
}