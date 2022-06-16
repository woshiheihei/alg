#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUM 10000

void printStrArr(int n, char** strArr);
void handleStrArrErr(int n, char** strArr);
void handleStrErr(char* str, const char* p1, const char* p2);
void readjust(char* p1, char* p2);

int main() {
  int n;
  scanf("%d", &n);
  char* strArr[1000];
  for (int i = 0; i < n; i++) {
    char tmp[MAX_NUM] = {0};
    scanf("%s", tmp);
    strArr[i] = (char*)malloc(sizeof(char) * strlen(tmp) + 1);
    strncpy(strArr[i], tmp, strlen(tmp));
  }

  handleStrArrErr(n, strArr);
  printStrArr(n, strArr);

  return 0;
}

void printStrArr(int n, char** strArr) {
  for (int i = 0; i < n; i++) {
    printf("%s\n", strArr[i]);
  }
  return;
}

void handleStrArrErr(int n, char** strArr) {
  for (int i = 0; i < n; i++) {
    handleStrErr(strArr[i], "Ban_smoking", "No_smoking");
  }

  return;
}

void handleStrErr(char* str, const char* p1, const char* p2) {
  int p1Len = strlen(p1);
  int p2Len = strlen(p2);
  if (strlen(str) < p1Len) return;

  for (int i = 0; str[i]; i++) {
    if (strncmp(str + i, p1, p1Len)) continue;
    strncpy(str + i, p2, p2Len);
    char* tmp1 = str + i + p1Len;
    readjust(str + i + p2Len, tmp1);
  }

  return;
}

void readjust(char* p1, char* p2) {
  int i = 0;
  for (; p2[i]; i++) {
    p1[i] = p2[i];
  }
  p1[i] = '\0';
}