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
25        int left=0;
26        int right=0;
27      if(indexmi<indexmx){
28        left=indexmi;
29        right=indexmx;
30      }else{
31        left=indexmx;
32        right=indexmi;
33      }
34
35        return min({left+1+n-right,right+1,n-left});
36        
37    }
38};