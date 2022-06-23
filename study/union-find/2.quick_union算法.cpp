#include <iostream>
#include <vector>

using namespace std;

class UnionSet {
 public:
  int *boss, n;

  UnionSet(int n) : n(n) {
    boss = new int[n + 1];
    for (int i = 0; i <= n; i++) {
      boss[i] = i;
    }
  }

  int find(int x) {
    if (x == boss[x]) return x;

    return find(boss[x]);
  }

  void merge(int a, int b) {
    int boss_a = find(a);
    int boss_b = find(b);

    if (boss_a == boss_b) {
      return;
    }
    boss[boss_b] = boss_a;
  }
};

int main() { return 0; }