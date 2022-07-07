#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUM 10000
int primes[MAX_NUM + 5] = {0};
void init_prime() {
  for (int i = 2; i * i < MAX_NUM; i++) {
    if (primes[i]) continue;

    for (int j = i * 2; j <= MAX_NUM; j += i) {
      primes[j] = 1;
    }
  }
  return;
}

int main() {
  init_prime();
  for (int i = 2; i < MAX_NUM; i++) {
    if (primes[i]) continue;
    printf("%d ", i);
  }
  return 0;
}