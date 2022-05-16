
#include <stdio.h>

int main() {
  char str[100] = {0};
  // %[^\n]s处理输入中的空格（防止空格被当作间隔符读入不到str这个数组中）
  while (scanf("%[^\n]s", str) != EOF) {
    // 把最后的\n去掉
    getchar();
    printf("\n%s has %d digits!\n", str, printf("%s", str));
  }

  return 0;
}