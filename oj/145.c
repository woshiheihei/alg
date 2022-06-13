#include <stdio.h>
#include <string.h>
#define MAX_NUM 100
char str[MAX_NUM] = {0};

int main() {
  int n = 0;
  int resStrLen = -1;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    char tmp[MAX_NUM] = {0};
    scanf("%s", tmp);
    int num = strlen(tmp);
    if (num > resStrLen) {
      strncpy(str, tmp, sizeof(tmp));
      resStrLen = num;
    }
  }
  printf("%s\n", str);
  return 0;
}