#include <stdio.h>
#define P(a) \
  printf("[%s -> %s -> %d] : %d\n", __FILE__, __FUNCTION__, __LINE__, a)

int main() {
  int n = 5;
  P(n);
  P(11);
  P(113);
  return 0;
}