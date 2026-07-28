1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4
5        vector<int> res;
6        deque<int> dq;
7
8        for (int i = 0; i < nums.size(); i++) {
9
10            // Remove indices outside current window
11            while (!dq.empty() && dq.front() <= i - k) {
12                dq.pop_front();
13            }
14
15            // Remove smaller elements
16            while (!dq.empty() && nums[dq.back()] < nums[i]) {
17                dq.pop_back();
18            }
19
20            dq.push_back(i);
21
22            // Window complete
23            if (i >= k - 1) {
24                res.push_back(nums[dq.front()]);
25            }
26        }
27
28        return res;
29    }
30};