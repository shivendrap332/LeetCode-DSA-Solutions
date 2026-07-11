1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4        int cnt=1;
5        sort(candyType.begin(),candyType.end());
6        for(int i=1; i<candyType.size(); i++){
7
8                if(candyType[i]!=candyType[i-1]){
9                    cnt++;
10                }
11
12        }
13
14        if(cnt<candyType.size()/2){
15            return cnt;
16        }
17        return candyType.size()/2;
18    }
19};