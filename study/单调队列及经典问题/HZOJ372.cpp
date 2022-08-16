#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];

  deque<int> q1, q2;
  for (int i = 0; i < n; i++) {
    while (q1.size() && a[q1.back()] > a[i]) q1.pop_back();
    while (q1.size() && a[q2.back()] > b[i]) q2.pop_back();
    q1.push_back(i);
    q2.push_back(i);
    
  }

  return 0;
}