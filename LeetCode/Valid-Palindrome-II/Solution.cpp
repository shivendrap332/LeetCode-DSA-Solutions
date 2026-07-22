1class Solution {
2public:
3    bool check(string &s, int i, int j) {
4        while (i < j) {
5            if (s[i] != s[j])
6                return false;
7            i++;
8            j--;
9        }
10        return true;
11    }
12
13    bool validPalindrome(string s) {
14        int n = s.size();
15        int i = 0;
16        int j = n - 1;
17
18        while (i < j) {
19            if (s[i] == s[j]) {
20                i++;
21                j--;
22            } else {
23                return check(s, i + 1, j) || check(s, i, j - 1);
24            }
25        }
26
27        return true;
28    }
29};