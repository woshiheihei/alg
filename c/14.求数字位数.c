#include <stdio.h>
#include <string.h>
#define MAX_NUM 100000

int main() {
  int n;
  char str[MAX_NUM] = {0};
  scanf("%d", &n);
  sprintf(str, "%d", n);
  printf("%ld\n", strlen(str));

  return 0;
}