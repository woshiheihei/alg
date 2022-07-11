#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <iostream>

int binarySearch(int *arr, int n, int x) {
  int head = 0, tail = n - 1, mid;

  while (tail - head > 3) {
    mid = head + (tail - head) / 2;
    if (arr[mid] == x) return mid;

    if (arr[mid] >= x) {
      tail = mid;
    } else {
      head = mid + 1;
    }
  }

  for (int i = head; i <= tail; i++) {
    if (arr[i] >= x) {
      return i;
    }
  }

  return -1;
}

int *getRandomArray(int n) {
  srand(time(NULL));  // Initialization, should only be called once.
  int r = rand();
  int *arr = (int *)malloc(sizeof(int) * n);
  arr[0] = rand() % 20 + 1;

  for (int i = 1; i < n; i++) {
    arr[i] = arr[i - 1] + rand() % 5;
  }

  return arr;
}

void outputArr(int *arr, int n) {
  int delimiterNum = 0;
  for (int i = 0; i < n; i++) {
    delimiterNum += printf("%5d ", arr[i]);
  }
  printf("\n");
  for (int i = 0; i < delimiterNum; i++) {
    printf("-");
  }
  printf("\n");
  for (int i = 0; i < n; i++) {
    printf("%5d ", i);
  }
  printf("\n");

  return;
}

int main() {
  int n = 0, x = 0;
  scanf("%d", &n);
  int *arr = getRandomArray(n);
  outputArr(arr, n);

  while (scanf("%d", &x) != EOF) {
    int index = binarySearch(arr, n, x);
    printf("arr[%d] = %d\n", index, x);
  }

  return 0;
}