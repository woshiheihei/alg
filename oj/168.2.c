#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUM 10000

int isUpperCase(char c);
int isLowerCase(char c);
char toUpperCase(char c);
char toLowerCase(char c);
void convert(char* str);
void print(int n, char** strArr);
void sort(int n, char** strArr);
// int __strcmp(const char* s1, const char* s2);

int main() {
  int n;
  char* strArr[101];
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    char tmp[MAX_NUM] = {0};
    scanf("%s", tmp);
    strArr[i] = (char*)malloc(strlen(tmp) + 1);
    strncpy(strArr[i], tmp, strlen(tmp));
    convert(strArr[i]);
  }

  // print(n, strArr);
  printf("\n");
  sort(n, strArr);
  print(n, strArr);

  return 0;
}

int isUpperCase(char c) { return c >= 'A' && c <= 'Z'; }
int isLowerCase(char c) { return c >= 'a' && c <= 'z'; }

char toUpperCase(char c) { return !!isUpperCase(c) ? c : 'A' + c - 'a'; }
char toLowerCase(char c) { return !!isLowerCase(c) ? c : 'a' + c - 'A'; }

void convert(char* str) {
  for (int i = 0; i < str[i]; i++) {
    str[i] = !i ? toUpperCase(str[i]) : toLowerCase(str[i]);
  }
  return;
}

void print(int n, char** strArr) {
  for (int i = 0; i < n; i++) {
    printf("%s\n", strArr[i]);
  }
  return;
}

void sort(int n, char** strArr) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      int resCmp = strcmp(strArr[j], strArr[j + 1]);
      if (resCmp > 0) {
        char* tmp = strArr[j];
        strArr[j] = strArr[j + 1];
        strArr[j + 1] = tmp;
      }
    }
  }
}

// int __strcmp(const char* s1, const char* s2) {
//   return s1[0] > s2[0] ? 1 : s1[0] == s2[0] ? 0 : -1;
// }