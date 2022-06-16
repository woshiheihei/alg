#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM 1000

int main() {
  char *str1 = (char *)malloc(sizeof(char) * MAX_NUM + 1);
  char *str2 = (char *)malloc(sizeof(char) * MAX_NUM + 1);
  int res = 0;
  scanf("%s", str1);
  scanf("%s", str2);
  int str2Len = strlen(str2);
  for (int i = 0; str1[i]; i++) {
    if (strlen(str1 + i) < str2Len) break;
    if (strncmp(str1 + i, str2, str2Len) == 0) res++;
  }
  printf("%d\n", res);
  return 0;
}