1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        int sum = 0;
5        for (int i = 0; i < nums.size(); i++) {
6            sum += nums[i];
7        }
8
9        int leftSum = 0;
10        for (int i = 0; i < nums.size(); i++) {
11            if (leftSum == sum - leftSum - nums[i]) {
12                return i;
13            }
14            leftSum += nums[i];
15        }
16
17        return -1;
18    }
19};