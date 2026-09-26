1class Solution {
2public:
3    int reverseDegree(string s) {
4        int ans = 0;
5
6        for (int i = 0; i < s.length(); i++) {
7            int reversePos = 'z' - s[i] + 1;
8            int stringPos = i + 1;
9
10            ans += reversePos * stringPos;
11        }
12
13        return ans;
14    }
15};