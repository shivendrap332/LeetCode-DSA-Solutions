1class Solution {
2public:
3    bool checkRecord(string s) {
4        
5        int cntA=0;
6        int cntL=0;
7        for(int i=0; i<s.size(); i++){
8        
9
10            if(s[i]=='A'){
11                cntA++;
12                cntL=0;
13                if(cntA>=2){
14                    return false;
15                }
16            }else if(s[i]=='L'){
17                cntL++;
18                if(cntL==3){
19                    return false;
20                }
21            }else{
22                cntL=0;
23            }
24        }
25
26        return true;
27    }
28};