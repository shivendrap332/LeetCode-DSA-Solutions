1class Solution {
2public:
3    string removeDuplicateLetters(string s) {
4        
5        int n = s.length();
6        string result;
7        
8        vector<bool> taken(26, false); //O(1) space
9        vector<int> lastIndex(26); //O(1) space
10        
11        for(int i = 0; i < n; i++) {
12            char ch = s[i];
13            
14            lastIndex[ch-'a'] = i;
15        }
16        
17        
18        for(int i = 0; i < n; i++) {
19            
20            int idx = s[i] - 'a';
21            
22            if(taken[idx] == true) continue;
23            
24            while(result.length() > 0 && s[i] < result.back() && lastIndex[result.back() - 'a'] > i) {
25                taken[result.back() - 'a'] = false;
26                result.pop_back();
27            }
28            
29            result.push_back(s[i]);
30            taken[idx] = true;
31            
32        }
33        
34        return result;
35    }
36};
37
38