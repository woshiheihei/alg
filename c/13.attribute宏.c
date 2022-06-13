// __attribute__((constructor)) 这个是要优先于main函数执行的
#include <stdio.h>

int add(int a, int b) { return a + b; }

__attribute__((constructor)) int test() {
  printf("%d + %d = %d\n", 3, 5, add(3, 5));
}

__attribute__((constructor)) int test2() {
  printf("%d + %d = %d\n", 3, 6, add(3, 6));
}

int main() { return 0; }