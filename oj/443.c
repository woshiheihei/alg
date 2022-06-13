#include <stdio.h>
#define MAX_NUM 10000

int main() {
  int L, M;
  int arr[MAX_NUM] = {0};

  int res = 0;
  scanf("%d%d", &L, &M);

  int start, end;
  for (int i = 0; i < M; i++) {
    scanf("%d%d", &start, &end);
    for (int j = start; j <= end; j++) {
      arr[j] = 1;
    }
  }
  for (int i = 0; i <= L; i++) {
    arr[i] || res++;
  }
  printf("%d\n", res);

  return 0;
}