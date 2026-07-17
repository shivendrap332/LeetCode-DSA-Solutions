1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4
5        sort(ransomNote.begin(), ransomNote.end());
6        sort(magazine.begin(), magazine.end());
7
8        int j = 0;
9        int i = 0;
10
11        while (i < ransomNote.length() && j < magazine.length()) {
12            if (magazine[j] == ransomNote[i]) {
13                i++;
14                j++;
15
16                if (i == ransomNote.length()) {   // all ransom characters matched
17                    return true;
18                }
19            } else {
20                j++;    // change this from i++ to j++
21            }
22        }
23
24        return false;
25    }
26};