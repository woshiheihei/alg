#include <stdio.h>
#include <string.h>
#define MAX_NUM 100000

int isUpperCase(char c);
int isLowerCase(char c);
char toUpperCase(char c);
char toLowerCase(char c);

int main() {
  int n;
  char str[MAX_NUM] = {0};
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    char tmp[101] = {0};
    scanf("%s", tmp);
    for (int j = 0; tmp[j]; j++) {
      tmp[j] = !!j ? toLowerCase(tmp[j]) : toUpperCase(tmp[j]);
    }
    int resStrLen = strlen(str);
    strncpy(str + resStrLen, tmp, strlen(tmp));
    str[strlen(str)] = '\n';
  }
  printf("%s", str);

  return 0;
}

int isUpperCase(char c) { return c >= 'A' && c <= 'Z'; }
int isLowerCase(char c) { return c >= 'a' && c <= 'z'; }

char toUpperCase(char c) { return !!isUpperCase(c) ? c : 'A' + c - 'a'; }
char toLowerCase(char c) { return !!isLowerCase(c) ? c : 'a' + c - 'A'; }