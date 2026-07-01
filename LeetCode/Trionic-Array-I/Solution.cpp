1class Solution {
2public:
3    bool isTrionic(vector<int>& nums) {
4
5        int n = nums.size();
6        int i = 1;
7
8        // Phase 1: Increasing
9        while (i < n && nums[i] > nums[i - 1]) {
10            i++;
11        }
12
13        // At least one increasing step
14        if (i == 1 || i == n) {
15            return false;
16        }
17
18        // Phase 2: Decreasing
19        while (i < n && nums[i] < nums[i - 1]) {
20            i++;
21        }
22
23        // At least one decreasing step
24        if (i == n) {
25            return false;
26        }
27
28        // Phase 3: Increasing
29        while (i < n && nums[i] > nums[i - 1]) {
30            i++;
31        }
32
33        return (i == n);
34    }
35};