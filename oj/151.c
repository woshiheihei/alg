#include "stdio.h"

int judgeSingle(int a, int b) {
  if (a == b) return 0;
  switch (a) {
    case 'Y':
      return b == 'O' ? -1 : 1;
    case 'O':
      return b == 'H' ? -1 : 1;
    case 'H':
      return b == 'Y' ? -1 : 1;
  }
  return -100;
}

int judge(char a, char b, char c, char d) {
  if (judgeSingle(a, c) == 1) {
    if (judgeSingle(a, d) >= 0) return 1;
    return judgeSingle(b, d) == 1 ? 1 : -1;
  } else if (judgeSingle(a, c) == 0) {
    return judgeSingle(b, d) == 0 ? 0 : judgeSingle(b, d) == 1 ? 1 : -1;
  } else if (judgeSingle(a, c) == -1) {
    if (judgeSingle(b, c) <= 0) return -1;
    return judgeSingle(b, d) >= 1 ? 1 : -1;
  }
  return -100;
}


int main() {
  char a, b, c, d;
  scanf("%c %c", &a, &b);
  getchar();
  scanf("%c %c", &c, &d);

  return judge(a, b, c, d) == 0  ? printf("TIE...\n")
         : judge(a, b, c, d) > 0 ? printf("MING...\n")
                                 : printf("LIHUA...\n");
  return 0;
}

