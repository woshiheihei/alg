#include <stdio.h>
#include <stdlib.h>

void printIntArr(int n, int *arr);
int longestWPI(int *hours, int hoursSize);

int main() {
  int hours[7] = {3, 9, 6, 0, 6, 6, 9};
  longestWPI(hours, 7);
  return 0;
}

int longestWPI(int *hours, int hoursSize) {
  int *arr1 = (int *)malloc(sizeof(int) * hoursSize);
  int *arr2 = (int *)malloc(sizeof(int) * hoursSize);
  for (int i = 0; i < hoursSize; i++) {
    arr1[i] = hours[i] > 8 ? 1 : -1;
    arr2[i] = i ? arr1[i] + arr2[i - 1] : arr1[i] + 0;
  }
  int res = 0;
  for (int i = 0; i < hoursSize; i++) {
    for (int j = -1; j <= i; j++) {
      int tem = j == -1 ? 0 : arr2[j];
      if (tem < arr2[i] && res < i - j) res = i - j;
    }
  }

  // printIntArr(hoursSize, arr1);
  // printIntArr(hoursSize, arr2);

  printf("%d\n", res);

  return 0;
}

void printIntArr(int n, int *arr) {
  for (int i = 0; i < n; i++) {
    printf("%d\t", arr[i]);
  }
  printf("\n");
}