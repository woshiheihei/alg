#include <iostream>
#include <map>
#include <vector>

using std::vector;
vector<long long> tmp;
int getRes(vector<long long>& sums, int l, int r, int lower, int upper) {
  int ans = 0;
  if (l >= r) return 0;
  int mid = (l + r) / 2;
  ans += getRes(sums, l, mid, lower, upper);
  ans += getRes(sums, mid + 1, r, lower, upper);

  int k1 = l, k2 = l;
  for (int j = mid + 1; j <= r; j++) {
    long long a = sums[j] - upper;
    long long b = sums[j] - lower;
    while (k1 <= mid && sums[k1] < a) k1++;
    while (k2 <= mid && sums[k2] <= b) k2++;
    ans += (k2 - k1);
  }

  int k = l, p1 = l, p2 = mid + 1;
  while (p1 <= mid || (p2 <= r)) {
    if (p2 > r || (p1 <= mid) && sums[p1] <= sums[p2]) {
      tmp[k++] = sums[p1++];
    } else {
      tmp[k++] = sums[p2++];
    }
  }

  for (int i = l; i <= r; i++) sums[i] = tmp[i];

  return ans;
}

int countRangeSum(vector<int>& nums, int lower, int upper) {
  vector<long long> sums(nums.size() + 1);
  while (tmp.size() < sums.size()) {
    tmp.push_back(0);
  }

  sums[0] = 0;
  for (int i = 0; i < nums.size(); i++) {
    sums[i + 1] = (nums[i] + sums[i]);
  }

  return getRes(sums, 0, sums.size() - 1, lower, upper);
}

int main() { return 0; }