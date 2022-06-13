// 这个题目不用复习，题目有误解
#include "stdio.h"

int main() {
  int n, j;
  double res;
  scanf("%d%d", &n, &j);
  for (int i = 0; i < j; i++) {
    res = (res + n) * (1.00417);
  }

  printf("$%.2f\n", res);

  return 0;
}