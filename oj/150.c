#include <stdio.h>
#define MAX_NUM 100000

int arr[MAX_NUM] = {0};

int main() {
  int n, m;

  scanf("%d%d", &n, &m);
  for (int i = 0; i < m * n; i++) {
    scanf("%d", &arr[i]);
  }
  // 打印原始数组
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     j&& printf(" ");
  //     printf("%d", arr[i * m + j]);
  //   }
  //   printf("\n");
  // }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      j&& printf(" ");
      printf("%d", arr[(n - j - 1) * m + i]);
    }
    printf("\n");
  }

  return 0;
}