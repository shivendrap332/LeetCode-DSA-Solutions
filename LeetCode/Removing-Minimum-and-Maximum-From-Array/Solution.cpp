1class Solution {
2public:
3    int minimumDeletions(vector<int>& nums) {
4        int n = nums.size();
5        int mini = INT_MAX;
6        int maxi = INT_MIN;
7        int sum = INT_MAX;
8        int indexmx = 0;
9        int indexmi = 0;
10
11        for(int i = 0; i < n; i++) {
12            int currmax = nums[i];
13            int currmini = nums[i];
14
15            if(currmax > maxi) {
16                maxi = currmax;
17                indexmx = i;
18            }
19
20            if(currmini < mini) {
21                mini = currmini;
22                indexmi = i;
23            }
24        }
25
26        // min and max both from left
27        sum = min(sum, max(indexmi, indexmx) + 1);
28
29        // min and max both from right
30        sum = min(sum, n - min(indexmi, indexmx));
31
32        // min from left, max from right
33        sum = min(sum, indexmi + 1 + n - indexmx);
34
35        // max from left, min from right
36        sum = min(sum, indexmx + 1 + n - indexmi);
37
38        return sum;
39    }
40};