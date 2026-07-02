1class Solution {
2public:
3    int countMajoritySubarrays(vector<int>& nums, int target) {
4        int n=nums.size()-1;
5        int count=0;
6        int ans=0;
7        for(int i=0; i<=n; i++){
8            count=0;
9            for(int j=i; j<=n; j++){
10                
11                if(nums[j]==target){
12                    count++;
13                }
14                    if(count>(j-i+1)/2){
15                        ans++;
16                    }
17                
18                
19                
20                
21            }
22        }
23        return ans;
24    }
25};