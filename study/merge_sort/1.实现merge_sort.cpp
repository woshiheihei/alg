#include <iostream>
#include <vector>

#define ARR_NUM 5

void mergeSort(int *arr, int l, int r) {
  if (l >= r) return;

  int mid = (r + l) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);

  int *tmpArr = (int *)malloc(sizeof(int) * (r - l + 1));
  int k = 0, p1 = l, p2 = mid + 1;
  while (p1 <= mid || p2 <= r) {
    if ((p2 > r) || ((p1 <= mid) && (arr[p1] <= arr[p2]))) {
      tmpArr[k++] = arr[p1++];
    } else {
      tmpArr[k++] = arr[p2++];
    }
  }

  for (int i = l; i <= r; i++) {
    arr[i] = tmpArr[i - l];
  }

  free(tmpArr);

  return;
}

int main() {
  int n = 0;
  scanf("%d", &n);
  int *arr = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  mergeSort(arr, 0, n - 1);
  printf("\n===============================================================\n");
  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
