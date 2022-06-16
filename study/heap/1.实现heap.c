#include <stdio.h>
#define MAX_NUM 10000

void _swap(int index1, int index2);
void shift_up(int index);
void shift_down(int index);
int push(int x);
void pop();
int top();
int size();
void output();

int data[MAX_NUM + 5] = {0};
int cnt = 0;

int main() {
  int op, val;
  while (~scanf("%d", &op)) {
    switch (op) {
      case 1: {
        scanf("%d", &val);
        push(val);
        printf("push %d to heap \n", val);
      } break;
      case 2: {
        printf("pop %d to heap \n", top());
        pop();
      } break;
    }
    output();
  }

  return 0;
}

void shift_up(int index) {
  while (index) {
    if (data[index] > data[(index - 1) / 2]) return;
    _swap(index, (index - 1) / 2);
    index = (index - 1) / 2;
  }
}

void shift_down(int index) {
  while (2 * index + 1 <= cnt - 1) {
    int minIndex = index;
    if (data[2 * index + 1] < data[index]) minIndex = 2 * index + 1;
    if ((2 * index + 2 <= cnt - 1) && data[2 * index + 2] < data[minIndex])
      minIndex = 2 * index + 2;
    _swap(index, minIndex);
    index = minIndex;
  }
  return;
}

void _swap(int index1, int index2) {
  if (index1 == index2) return;
  int tem = data[index1];
  data[index1] = data[index2];
  data[index2] = tem;
  return;
}

int push(int x) {
  data[cnt] = x;
  cnt++;
  shift_up(cnt - 1);
  return 0;
}
void pop() {
  if (!size()) return;
  _swap(0, cnt - 1);
  cnt--;
  shift_down(0);
  return;
}
int top() { return data[0]; }
int size() { return cnt; }

void output() {
  while (size()) {
    printf("%d ", top());
    pop();
  }
  printf("\n");
  return;
}
