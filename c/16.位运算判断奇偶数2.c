#include <stdio.h>

int main() {
  int n;
  while (~scanf("%d", &n)) {
    if (n & 1) {
      printf("奇数\n");
    } else {
      printf("偶数\n");
    }
  }

  return 0;
}