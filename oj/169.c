#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUM 30

void printchArr(int n, char *chArr) {
  for (int i = 0; i < n; i++) {
    printf("%c ", chArr[i]);
  }
  printf("\n");
}
void printIntArr(int n, int *intArr) {
  for (int i = 0; i < n; i++) {
    printf("%d ", intArr[i]);
  }
  printf("\n");
}

int getNum(int n, char *chArr, int *intArr, char ch);

int main() {
  int n;
  scanf("%d", &n);
  // 下面用到malloc,所以在这之前一定要把n的值确定下来,所以，一定要先用scanf读入n的值
  char *chArr = (char *)malloc(sizeof(char) * n);
  int *intArr = (int *)malloc(sizeof(int) * n);
  char *str = (char *)malloc(sizeof(char) * MAX_NUM + 1);
  memset(str, 0, sizeof(char) * MAX_NUM + 1);
  unsigned long long res = 0;
  for (int i = 0; i < n; i++) {
    getchar();
    scanf("%c", chArr + i);
    scanf("%d", intArr + i);
  }
  scanf("%s", str);

  // printf("\n");
  // printchArr(n, chArr);
  // printIntArr(n, intArr);
  // printf("str: %s\n", str);
  // printchArr(n, chArr);
  // printIntArr(n, intArr);

  for (int i = 0; str[i]; i++) {
    int tem = getNum(n, chArr, intArr, str[i]);
    res += tem;
  }

  printf("%llu\n", res);

  return 0;
}

int getNum(int n, char *chArr, int *intArr, char ch) {
  for (int i = 0; i < n; i++) {
    if (chArr[i] == ch) {
      return intArr[i];
    }
  }
  return 0;
}
