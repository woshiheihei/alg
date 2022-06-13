#include <stdio.h>
#define MAX_NUM 1000

int main() {
  int n, m;
  int arr[MAX_NUM];
  scanf("%d%d", &n, &m);
  for (int i = 0; i < m * n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    double res = 0;
    for (int j = 0; j < m; j++) {
      res += arr[i * m + j];
    }
    printf("%.6f\n", res / m);
  }

  return 0;
}