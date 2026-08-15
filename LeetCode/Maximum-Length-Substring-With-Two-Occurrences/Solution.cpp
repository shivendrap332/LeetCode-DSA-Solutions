1class Solution {
2public:
3    int maximumLengthSubstring(string s) {
4        int cnt = 0;
5        map<char,int> mp;
6        int maxcnt = 0;
7        int left = 0;
8
9        for(int i = 0; i < s.length(); i++) {
10            if(mp.find(s[i]) != mp.end()) {
11                if(mp[s[i]] < 2) {
12                    mp[s[i]]++;
13                    cnt++;
14                }
15                else {
16                    while(mp[s[i]] >= 2) {
17                        mp[s[left]]--;
18                        left++;
19                        cnt--;
20                    }
21                    mp[s[i]]++;
22                    cnt++;
23                }
24            }
25            else {
26                mp[s[i]]++;
27                cnt++;
28            }
29
30            maxcnt = max(maxcnt, cnt);
31        }
32
33        return maxcnt;
34    }
35};