#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <iostream>

void printSymbol(int n, int symbol1Index, int symbol2Index, int symbol3Index) {
  for (int i = 0; i < n; i++) {
    if (i == symbol1Index - 1 || i == symbol2Index - 1 ||
        i == symbol3Index - 1) {
      printf("%c", '^');
    } else {
      printf("%c", ' ');
    }
  }
  printf("\n");
  for (int i = 0; i < n; i++) {
    if (i == symbol1Index - 1 || i == symbol2Index - 1 ||
        i == symbol3Index - 1) {
      printf("%c", '|');
    } else {
      printf("%c", ' ');
    }
  }
  printf("\n\n");
  return;
}

void outputProcess(int *arr, int n, int head, int tail, int mid) {
  int delimiterNum = 0;
  int symbol1Index = 0;
  int symbol2Index = 0;
  int symbol3Index = 0;
  for (int i = 0; i < n; i++) {
    delimiterNum += printf("%5d", arr[i]);
    if (i <= head) symbol1Index = delimiterNum;
    if (i <= tail) symbol2Index = delimiterNum;
    if (i <= mid) symbol3Index = delimiterNum;
  }
  printf("\n");
  for (int i = 0; i < delimiterNum; i++) {
    printf("-");
  }
  printf("\n");
  for (int i = 0; i < n; i++) {
    printf("%5d", i);
  }
  printf("\n");

  printSymbol(delimiterNum, symbol1Index, symbol2Index, symbol3Index);
  return;
}

int binarySearch(int *arr, int n, int x) {
  int head = 0, tail = n - 1, mid;

  while (tail - head > 3) {
    mid = head + (tail - head) / 2;
    outputProcess(arr, n, head, tail, mid);
    if (arr[mid] == x) return mid;
    if (arr[mid] > x) {
      tail = mid - 1;
    } else {
      head = mid + 1;
    }
  }

  for (int i = head; i <= tail; i++) {
    if (arr[i] == x) {
      return i;
    }
  }

  return -1;
}

void outputArr(int *arr, int n) {
  int delimiterNum = 0;
  for (int i = 0; i < n; i++) {
    delimiterNum += printf("%5d", arr[i]);
  }
  printf("\n");
  for (int i = 0; i < delimiterNum; i++) {
    printf("-");
  }
  printf("\n");
  for (int i = 0; i < n; i++) {
    printf("%5d", i);
  }
  printf("\n");

  return;
}

int *getRandomArray(int n) {
  srand(time(NULL));  // Initialization, should only be called once.
  int r = rand();
  int *arr = (int *)malloc(sizeof(int) * n);
  arr[0] = rand() % 20 + 1;

  for (int i = 1; i < n; i++) {
    arr[i] = arr[i - 1] + rand() % 10;
  }

  return arr;
}

int main() {
  int n = 0, x = 0;
  scanf("%d", &n);
  int *arr = getRandomArray(n);
  outputArr(arr, n);
  scanf("%d", &x);
  int index = binarySearch(arr, n, x);
  printf("arr[%d] = %d\n", index, x);

  return 0;
}