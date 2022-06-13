#include <stdio.h>
#define MAX_NUM 100

void printArr(int n, int* arr) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      //   arr[i][j] = > arr[i * n + j]
      j&& printf(" ");
      printf("%d", arr[i * n + j]);
    }
    printf("\n");
  }
  return;
}

int main() {
  int n;
  int arr[MAX_NUM] = {0};
  scanf("%d", &n);

  for (int x = 0; x <= n / 2 + 1; x++) {
    for (int i = x; i < n - x; i++) {
      for (int j = x; j < n - x; j++) {
        arr[i * n + j] = x + 1;
      }
    }
  }

  printArr(n, arr);

  return 0;
}