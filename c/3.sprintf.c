#include <stdio.h>

int main() {
  char str[100] = {0};

  // 把字符输出到字符数组当中
  sprintf(str, "%d.%d.%d.%d", 192, 168, 1, 1);
  printf("ipaddr = %s\n", str);

  // 把字符输出到文件当中
  FILE *output = fopen("output.txt", "w");
  fprintf(output, "ipaddr: %s", str);

  // 文件描述符这里用标准输出 => 也是一种文件描述符
  fprintf(stdout, "stdout => ipaddr: %s\n", str);

  // stderr 同样也是输出到字符终端,但是可以在Linux中通过 2> 来指定把标准错误输出重定向到某个文件，这样就与标准输出和标准错误输出区分开了
  fprintf(stderr, "stderr => ipaddr: %s\n", str);

  return 0;
}
