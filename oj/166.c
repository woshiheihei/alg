#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM 10000

int my_strlen(const char *str);

int main() {
  char *A = (char *)malloc(sizeof(char) * MAX_NUM + 1);
  char *B = (char *)malloc(sizeof(char) * MAX_NUM + 1);
  char *C = (char *)malloc(2 * sizeof(char) * MAX_NUM + 1);
  int N = 0;
  scanf("%s", A);
  scanf("%d", &N);
  scanf("%s", B);

  // 如果字符串A 的长度L 大于100 输出 100，否则输出L ；
  if (my_strlen(A) > 100) {
    printf("%d\n", 100);
  } else {
    printf("%d\n", my_strlen(A));
  }

  // 在N 点处，插入字符串B 后，将得到一个新字符串C ，请计算并输出最后的字符串；
  int BLen = my_strlen(B);
  strncpy(C, A, N - 1);
  strncpy(C + N - 1, B, BLen);
  strncpy(C + N - 1 + BLen, A + N - 1, my_strlen(A + N - 1));
  printf("%s\n", C);

  // 查找字符串C 中，从右到左第一个出现字母 x 的位置。
  int CLen = my_strlen(C);
  for (int i = CLen - 1, j = 1; i >= 0; i--, j++) {
    if (C[i] == 'x') {
      printf("%d\n", j);
      break;
    }
  }

  return 0;
}

int my_strlen(const char *str) {
  int res = 0;
  for (int i = 0; str[i]; i++) {
    res += 1;
  }
  return res;
}