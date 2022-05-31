#include "stdio.h"
int isLeap(int y) { return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0); }

int main() {
  int y, m;
  int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  scanf("%d%d", &y, &m);
  if (isLeap(y)) days[2] = 29;
  printf("%d\n", days[m]);
  return 0;
}
