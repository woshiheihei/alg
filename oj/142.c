#include <stdio.h>

int isPrime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (!(n % i)) return 0;
  }
  return 1;
}

int isPalindromes(int n) {
  int tem = n;
  int m = 0;
  while (tem) {
    m = m * 10 + tem % 10;
    tem /= 10;
  }

  return n == m ? 1 : 0;
}

int main() {
  int m, n;
  int first = 0;
  scanf("%d%d", &m, &n);

  for (int i = m; i <= n; i++) {
    if (isPrime(i) && isPalindromes(i)) {
      !!first && printf(" ");
      first = 1;
      printf("%d", i);
    }
  }
  printf("\n");

  return 0;
}