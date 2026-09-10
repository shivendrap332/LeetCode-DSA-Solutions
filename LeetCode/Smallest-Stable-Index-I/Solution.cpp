1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        vector<int> suffixMin(n);
7        suffixMin[n - 1] = nums[n - 1];
8
9        for (int i = n - 2; i >= 0; i--) {
10            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
11        }
12
13        int prefixMax = INT_MIN;
14
15        for (int i = 0; i < n; i++) {
16            prefixMax = max(prefixMax, nums[i]);
17
18            if (prefixMax - suffixMin[i] <= k) {
19                return i;
20            }
21        }
22
23        return -1;
24    }
25};