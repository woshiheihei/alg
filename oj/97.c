#include "stdio.h"

int main() {
  long long n;
  scanf("%lld", &n);

  // printf("%lld\n", n / 2 * (1 + n));   // 先除以2是有问题的，由于是long long/int类型如果是奇数除以2之后就会过滤掉小数点之后的值
  printf("%lld\n", (n * (1 + n) / 2));

  return 0;
}