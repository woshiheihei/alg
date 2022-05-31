#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  printf("%s\n", (n % 7 == 0) && (n % 2) ? "YES" : "NO");
  
  return 0;
}