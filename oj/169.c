#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUM 30

int getNum(int n, char *chArr, int *intArr, char ch);

int main() {
  int n;
  char *chArr = (char *)malloc(sizeof(char) * n);
  int *intArr = (int *)malloc(sizeof(int) * n);
  char *str = (char *)malloc(sizeof(char) * MAX_NUM + 1);
  int res = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%c%d", chArr + i, intArr + i);
    printf("output: %c %d \n", chArr + i, intArr + i);
  }

  scanf("%s", str);

  for (int i = 0; str[i]; i++) {
    res += getNum(n, chArr, intArr, str[i]);
  }

  printf("%d\n", res);

  return 0;
}

int getNum(int n, char *chArr, int *intArr, char ch) {
  for (int i = 0; i < n; i++) {
    if (chArr[i] == ch) return intArr[i];
  }
  return 0;
}