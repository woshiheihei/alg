#include <iostream>
#include <vector>

using namespace std;

class UnionSet {
 public:
  int *color, n;
  UnionSet(int n) : n(n) {
    color = new int[n + 1];
    for (int i = 0; i <= n; i++) {
      color[i] = i;
    }
  }

  int find(int x) { return color[x]; }

  void merge(int a, int b) {
    int tmp = color[b];
    for (int i = 0; i < n; i++) {
      if (color[i] == tmp) {
        color[i] = color[a];
      }
    }
    return;
  }

}

int main() {
  return 0;
}