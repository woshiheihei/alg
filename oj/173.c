#include <stdio.h>
#include <string.h>
#define MAX_NUM 1001

char str[MAX_NUM] = {0};
int main() {
  int alphabetNum = 0, spaceNum = 0, otherNum = 0, numericNum = 0;
  scanf("%[^\n]s", str);
  //   printf("%s\n", str);
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] - 'A' >= 0 && str[i] - 'A' < 26) {
      alphabetNum++;
    } else if (str[i] - 'a' >= 0 && str[i] - 'a' < 26) {
      alphabetNum++;
    } else if (str[i] - '0' >= 0 && str[i] - '0' < 10) {
      numericNum++;
    } else if (str[i] == ' ') {
      spaceNum++;
    } else {
      otherNum++;
    }
  }

  printf("%d %d %d %d\n", alphabetNum, numericNum, spaceNum, otherNum);

  return 0;
}