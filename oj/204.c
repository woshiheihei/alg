#include <stdio.h>
#define MAX_NUM 10000

int main() {
  int n;
  int arr[MAX_NUM] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n * n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i * n + i]);
  }

  return 0;
}