#include <stdio.h>
#define MAX_NUM 10000
int main() {
  int n, m;
  int arr[MAX_NUM] = {0};
  scanf("%d%d", &n, &m);
  for (int i = i; i < n * m; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < m; i++) {
    int res = 0;
    for (int j = 0; j < n; j++) {
      res += arr[j * m + i];
    }
    printf("%d\n", res);
  }

  return 0;
}