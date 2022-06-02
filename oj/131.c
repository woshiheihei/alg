#include <limits.h>
#include <stdio.h>

int main() {
  int num, tem, maxNum = INT_MIN, minNum = INT_MAX;
  scanf("%d", &num);
  for (int i = 0; i < num; i++) {
    scanf("%d", &tem);
    maxNum = tem > maxNum ? tem : maxNum;
    minNum = tem < minNum ? tem : minNum;
  }

  printf("%d\n", maxNum - minNum);
  return 0;
}