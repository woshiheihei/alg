#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM 1000000
void convert(const char *str1, char *str2);

int main() {
  char *str1 = (char *)malloc(sizeof(char) * MAX_NUM + 1);
  char *str2 = (char *)malloc(3 * sizeof(char) * MAX_NUM + 1);
  scanf("%[^\n]s", str1);
  convert(str1, str2);
  printf("%s\n", str2);

  return 0;
}

void convert(const char *str1, char *str2) {
  const char *tmp = "%20";
  int temLen = strlen(tmp);
  for (int i = 0, j = 0; str1[i]; i++, j++) {
    str2[j] = str1[i];
    if (str1[i] == ' ') {
      strncpy(str2 + j, tmp, temLen);
      j += temLen - 1;
    }
  }
  return;
}