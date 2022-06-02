#include <stdio.h>

int isPrime(int n) {
  for (int i = 2; i <= n - 1; i++) {
    if (!(n % i)) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 2; i <= n; i++) {
    if (!isPrime(i)) continue;
    printf("%d\n", i);
  }

  return 0;
}