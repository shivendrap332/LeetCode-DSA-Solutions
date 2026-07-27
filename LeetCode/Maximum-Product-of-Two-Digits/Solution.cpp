1class Solution {
2public:
3    int maxProduct(int n) {
4        vector<int>res;
5        int x=n;
6        int ans=1;
7        int cnt=2;
8        while(x!=0){
9            int rem=x%10;
10            res.push_back(rem);
11            
12            x=x/10;
13            
14        }
15        sort(res.begin(),res.end());
16        return res[res.size()-1]*res[res.size()-2];
17        
18    }
19};