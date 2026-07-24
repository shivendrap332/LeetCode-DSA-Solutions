1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4            int n=nums.size();
5            bool c=true;
6            int cnt=0;
7            for(int i=0; i<n; i++){
8                if(nums[i]<0){
9                    cnt++;
10                   
11                }else if(nums[i]>0){
12                    c=false;
13                }
14            }
15
16            sort(nums.begin(),nums.end());
17
18            int i=0; 
19            int j=n-1;
20
21
22                if(c==true){
23                    return nums[n-1]*nums[n-2]*nums[n-3];
24                }
25            if(cnt<2){
26                return nums[n-1]*nums[n-2]*nums[n-3];
27            }else{
28            while(i<j){
29                int a=abs(nums[0])*abs(nums[1]);
30                int b=nums[n-1]*nums[n-2];
31                 int c=abs(nums[0])*abs(nums[1])*nums[n-1];
32                 int d=nums[n-1]*nums[n-2]*nums[n-3];
33                if(a>b){
34                    return a*nums[n-1];
35                }else{
36                 if(d>c){
37                    return d;
38                 }else{
39                    return c;
40                 }
41                }
42            }
43            }
44            return 0;
45    }
46};