1class Solution {
2public:
3    int smallestIndex(vector<int>& nums) {
4        
5            int n=nums.size();
6        for(int i=0; i<n; i++){
7
8                if(nums[i]>=10){
9                    int t=nums[i];
10                    int sum=0;
11                    while(t!=0){
12                        int rem=t%10;
13                        sum+=rem;
14                        t=t/10;
15                    }
16                    if(sum==i){
17                        return i;
18                    }
19                }else if(nums[i]==i){
20                    return i;
21                }else{
22                    continue;
23                }
24
25        }
26        return -1;
27    }
28};