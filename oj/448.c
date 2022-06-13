#include <stdio.h>

#define MAX_NUM 10000

int main() {
  int n;
  int arr[MAX_NUM] = {0};
  int i = 0;
  int num;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
  scanf("%d", &num);

  for (int i = 0; i < n; i++) {
    if (arr[i] == num) {
      printf("%d\n", i + 1);
      return 0;
    }
  }
  printf("%d\n", 0);

  return 0;
}