#include <stdio.h>
int arr[10] = {0};
#define MAX_NUM 10000000
#define ARR_NUM 11

unsigned long long fn(int x);
unsigned long long getValueFromCache(int x);

unsigned long long cache[MAX_NUM] = {0};
int m;
int main() {
  int k;
  scanf("%d%d", &k, &m);
  for (int i = 1; i <= ARR_NUM - 1; i++) {
    scanf("%d", arr + i);
  }

  printf("%llu\n", fn(k) % m);

  return 0;
}

unsigned long long fn(int x) {
  unsigned long long res = 0;
  if (x < 10) return x;
  for (int i = 1; i <= ARR_NUM - 1; i++) {
    unsigned long long tem =
        !!arr[i] ? (arr[i] * getValueFromCache(x - i)) % m : 0;
    res += tem;
  }
  return res % m;
}

unsigned long long getValueFromCache(int x) {
  if (!cache[x]) cache[x] = fn(x);
  return cache[x];
}