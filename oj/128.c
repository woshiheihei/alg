#include <stdio.h>

int main() {
  int n;
  int tem;
  double res = 0.0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &tem);
    res += tem;
  }

  printf("%.2f\n", res / n);

  return 0;
}