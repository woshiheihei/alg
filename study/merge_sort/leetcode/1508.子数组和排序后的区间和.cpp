#include <iostream>
#include <queue>
#include <vector>

using std::priority_queue;
using std::vector;
class Solution {
 public:
  struct Data {
    Data(int i, int j, long long sum) : i(i), j(j), sum(sum){};
    int i, j, sum;
  };

  struct CMP {
    bool operator()(const Data &a, const Data &b) { return a.sum > b.sum; }
  };

  int rangeSum(vector<int> &nums, int n, int left, int right) {
    int ans = 0;
    int mod = 1e9 + 7;
    priority_queue<Data, vector<Data>, CMP> q;
    for (int i = 0; i < n; i++) {
      q.push(Data{i, i, nums[i]});
    }

    for (int i = 1; i <= right; i++) {
      Data tmp = q.top();
      q.pop();
      if (i >= left) {
        ans = (tmp.sum + ans) % mod;
      }
      if (tmp.j + 1 < n)
        q.push(Data{tmp.i, tmp.j + 1, (tmp.sum + nums[tmp.j + 1]) % mod});
    }

    return ans;
  }
};

int main() { return 0; }
