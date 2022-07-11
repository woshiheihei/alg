#include <stdio.h>

int main() {
  int a = 15;
  a = printf("%5d", a);
  printf("\n");
  for (int i = 0; i < a; i++) {
    printf("%c", 'c');
  }
}