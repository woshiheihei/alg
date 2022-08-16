#include <stdio.h>
#include <stdlib.h>

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;

struct Node {
  Node(int data = 0, struct Node *next = nullptr) : data(data), next(next) {}
  int data;
  struct Node *next;
};

struct Node *insert(struct Node *head, int ind, struct Node *a) {
  struct Node ret, *p = &ret;
  ret.data = 0;
  ret.next = head;
  while (ind--) p = p->next;
  a->next = p->next;
  p->next = a;
  return ret.next;
}

struct Node *erase(struct Node *head, int ind) {
  struct Node ret, *p = &ret;
  ret.next = head;
  while (ind--) p = p->next;
  struct Node *tmp = p->next;
  p->next = tmp->next;
  tmp->next = nullptr;
  return ret.next;
}

void output(struct Node *head) {
  struct Node *p = head;
  cout << "当前链表结果:";
  while (p != nullptr) {
    cout << p->data << " ";
    p = p->next;
  }
  cout << endl;
}

int main() {
  int a, op;
  struct Node *head = nullptr;

  while (1) {
    cin >> op;
    switch (op) {
      case 1: {
        cin >> a;
        struct Node *tmp = (struct Node *)(malloc(sizeof(struct Node)));
        tmp->data = a;
        tmp->next = nullptr;
        head = insert(head, 0, tmp);
        output(head);
        break;
      }
      case 2: {
        int ind = 0;
        cout << "请输入需要移除的索引号: ";
        cin >> ind;
        head = erase(head, ind);
        output(head);
        break;
      }
      default:
        output(head);
        break;
    }
  }

  return 0;
}