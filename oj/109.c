#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  do {
    if (!(n & 1)) {
      printf("%s\n", "YES");
      return 0;
    }
    n /= 10;
  } while (n);

  printf("%s\n", "NO");

  return 0;
}