#include <stdio.h>
#define MAX_NUM 10000000

char str[MAX_NUM] = {0};

int main() {
  scanf("%s", str);
  for (int i = 0; str[i]; i++) {
    if (str[i] - 'A' < 26) {
      str[i] = 'a' + str[i] - 'A';
    } else {
      str[i] = 'A' + str[i] - 'a';
    }
  }
  printf("%s\n", str);
  return 0;
}