class Solution {
public:
    int getRes(vector<long long> &sums, int l, int r, int lower, int upper) {
        int ans = 0;
        if (l >= r) return 0;
        int mid = (l + r) / 2;
        ans += getRes(sums, l, mid, lower, upper);
        ans += getRes(sums, mid + 1, r, lower, upper);

        long k1 = l, k2 = l;
        for (int j = mid + 1; j <=r; j++) {
            long long a = sums[j] - upper;
            long long b = sums[j] - lower;
            for (int i = l; (i <= mid && sums[i] < a); i++) k1++;
            for (int i = l; (i <= mid && sums[i] < b); i++) k2++;
            ans += (k2 - k1);
        }

        vector<int> tmp;
        for (int i = l; i <= r; i++) tmp.push_back(0);

        int k = 0, p1 = l, p2 = mid + 1;
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
        vector<long long> sums;
        sums.push_back(0);
        for (int i = 0; i < nums.size(); i++) {
            sums.push_back(nums[i] + sums[i]);
        }

        return getRes(sums, 0, sums.size()-1, lower, upper);

    }
};