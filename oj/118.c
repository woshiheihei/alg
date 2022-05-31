#include "stdio.h"

int main() {
  int y;
  scanf("%d", &y);
  char* ChineseZodiac[] = {
      "monkey", "rooster", "dog",    "pig",   "rat",   "ox",
      "tiger",  "rabbit",  "dragon", "snake", "horse", "sheep",
  };
  printf("%s\n", ChineseZodiac[y % 12]);

  return 0;
}
