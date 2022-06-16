#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUM 10000

int main() {
  int N;
  char *A = (char *)malloc(sizeof(char) * MAX_NUM);
  char *B = (char *)malloc(sizeof(char) * MAX_NUM);
  char *C = (char *)malloc(sizeof(char) * MAX_NUM * 2);

  scanf("%s", A);
  scanf("%d", &N);
  scanf("%s", B);

  printf("%ld\n", strlen(A));

  for (int i = 0; A[i]; i++) {
    if (A[i] == 'a') {
      printf("%d\n", i + 1);
      break;
    }
  }

  int BLen = strlen(B);

  strncpy(C, A, N - 1);
  strncpy(C + N - 1, B, BLen);
  strncpy(C + N - 1 + BLen, A + N - 1, strlen(A + N - 1));
  printf("%s\n", C);

  return 0;
}