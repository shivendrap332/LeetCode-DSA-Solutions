1class Solution {
2public:
3    int maxProduct(int n) {
4        vector<int>res;
5        int x=n;
6        int ans=1;
7        int maxi=0;
8        int maxi2;
9        while(x!=0){
10            int rem=x%10;
11            if(rem>=maxi){
12                maxi2=maxi;
13                maxi=rem;
14            }else if(rem<= maxi && rem>maxi2){
15                maxi2=rem;
16            }
17            maxi=max(maxi,rem);
18            x=x/10;
19            
20        }
21       return maxi*maxi2;
22        
23    }
24};