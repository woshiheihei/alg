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
  int n, k;
  vector<int> arr;
  cin >> n >> k;

  for (int i = 0, tmp; i < n; i++) {
    cin >> tmp;
    arr.push_back(tmp);
  }

  deque<int> q;
  for (int i = 0; i < n; i++) {
    while (q.size() && arr[i] <= arr[q.back()]) q.pop_back();
    q.push_back(i);
    if (i + 1 < k) continue;
    if (q.front() == i - k) q.pop_front();
    if (i + 1 > k) cout << " ";
    cout << arr[q.front()];
  }
  cout << endl;
  
  q.clear();
  for (int i = 0; i < n; i++) {
    while (q.size() && arr[i] >= arr[q.back()]) q.pop_back();
    q.push_back(i);
    if (i + 1 < k) continue;
    if (q.front() == i - k) q.pop_front();
    if (i + 1 > k) cout << " ";
    cout << arr[q.front()];
  }
  cout << endl;

  return 0;
}