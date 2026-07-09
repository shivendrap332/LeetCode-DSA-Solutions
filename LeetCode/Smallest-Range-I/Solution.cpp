1class Solution {
2public:
3    int smallestRangeI(vector<int>& nums, int k) {
4        sort(nums.begin(),nums.end());
5
6        int one=0;
7        int two=0;
8
9        one=nums[0];
10        two=nums[nums.size()-1];
11        int diff=two-one;
12        if(two-one<=k){
13            one+=diff;
14        }else{
15            one+=k;
16        }
17
18        int num=two-one;
19
20        if(num<=k){
21            two-=num;
22        }else{
23            two-=k;
24        }
25
26    
27
28        return two-one;
29
30    }
31};