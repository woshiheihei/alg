// C implementation of the above idea
#include <stdio.h>

// Declaration of enum
typedef enum { F, T } boolean;

int main() {
  int i = 1;
  do {
    printf("%d\n", i);
    i = i + 1;
  } while (i <= 100);

  return;
}
