
#include <iostream>
#include <vector>

using std::vector;
using namespace std;
vector<int> tmp;
vector<int> res;

void countTwoParts(vector<int> &nums, int l1, int r1, int l2, int r2) {
  int k = r2;
  for (int i = r1; i >= l1; i--) {
    while (k >= l2 && nums[i] <= nums[k]) k--;
    res[i] += (k - l2 + 1);
  }

  return;
}

void mergeSort(vector<int> &nums, int l, int r) {
  if (l >= r) return;
  int mid = (r + l) >> 1;

  mergeSort(nums, l, mid);
  mergeSort(nums, mid + 1, r);
  countTwoParts(nums, l, mid, mid + 1, r);

  int k = l, p1 = l, p2 = mid + 1;
  while (p1 <= mid || p2 <= r) {
    if (p2 > r || (p1 <= mid && nums[p1] < nums[p2])) {
      tmp[k++] = nums[p1++];
    } else {
      tmp[k++] = nums[p2++];
    }
  }
  return;
}

vector<int> countSmaller(vector<int> &nums) {
  while (tmp.size() < nums.size()) tmp.push_back(0);
  while (res.size() < nums.size()) res.push_back(0);
  mergeSort(nums, 0, nums.size() - 1);
  return res;
}

int main() {
  vector<int> nums(4);
  nums[0] = 5;
  nums[1] = 2;
  nums[2] = 6;
  nums[3] = 1;
  countSmaller(nums);

  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }

  cout << endl;

  return 0;
}