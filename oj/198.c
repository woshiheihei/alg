#include <stdio.h>
#define MAX_NUM 100000

unsigned long long fn(int n);

unsigned long long getFromCache(int n);

unsigned long long cache[MAX_NUM] = {0};

int main() {
  int n;
  scanf("%d", &n);

  printf("%llu\n", fn(n));

  return 0;
}

unsigned long long fn(int n) {
  if (n == 1 || n == 2) return 1;

  return ((unsigned long long)(getFromCache(n - 1) % 1000000007) +
          (unsigned long long)(getFromCache(n - 2) % 1000000007)) %
         1000000007;
}

unsigned long long getFromCache(int n) {
  if (!cache[n - 1]) cache[n - 1] = fn(n);
  return cache[n - 1];
}