#include <iostream>
#include <map>
#include <vector>

struct Data {
  FILE *fin;
  int val, flag;
};

int main(int argc, char **argv) {
  int n = argc - 1;
  Data *data = (Data *)malloc(sizeof(Data) * n);
  for (int i = 0; i < n; i++) {
    data[i].fin = fopen(argv[i + 1], "r");
    if (fscanf(data[i].fin, "%d", &(data[i].val)) == EOF) {
      data[i].flag = 1;
    } else {
      data[i].flag = 0;
    }
  }

  FILE *outputFin = fopen("output", "w");
  while (1) {
    int index = -1;
    for (int i = 0; i < n; i++) {
      if (data[i].flag != 0) continue;
      if (index == -1) {
        index = i;
      } else {
        index = data[i].val < data[index].val ? i : index;
      }
    }

    if (index == -1) break;

    fprintf(outputFin, "%d\n", data[index].val);

    if (fscanf(data[index].fin, "%d", &(data[index].val)) == EOF) {
      data[index].flag = 1;
    } else {
      data[index].flag = 0;
    }
  }

  return 0;
}