1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4
5        sort(ransomNote.begin(), ransomNote.end());
6        sort(magazine.begin(), magazine.end());
7        int k = magazine.size();
8        int j = 0;
9        int i = 0;
10        while (j < magazine.length() && i<ransomNote.size()) {
11            if (magazine[j] == ransomNote[i]) {
12                i++;
13                j++;
14                
15                if (i == ransomNote.size()) {
16                    return true;
17                }
18            } else {
19                j++;
20            }
21        }
22    
23    return false;
24}
25};
26