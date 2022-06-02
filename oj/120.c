#include "stdio.h"
int isLeap(int y) { return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0); }

int main() {
  int y, m, d;
  int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  scanf("%d%d%d", &y, &m, &d);
  if (m <= 0 || m > 12 || d <= 0 || d > 31) {
    printf("NO\n");
    return 0;
  }
  if (isLeap(y)) days[2] = 29;
  days[m] < d ? printf("NO\n") : printf("YES\n");
  return 0;
}
