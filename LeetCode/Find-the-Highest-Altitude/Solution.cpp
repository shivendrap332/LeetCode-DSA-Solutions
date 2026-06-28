1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int n = gain.size();
5        int ans = 0;
6        int lasthigh = 0;
7
8        int current = 0;
9
10        for(int i = 0; i < n; i++){
11            current += gain[i];
12
13            if(current > lasthigh){
14                lasthigh = current;
15                ans = current;
16            }
17        }
18
19        return ans;
20    }
21};