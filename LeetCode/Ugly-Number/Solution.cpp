1class Solution {
2public:
3    bool isUgly(int n) {
4
5        if (n <= 0) return false;
6
7        while (n % 2 == 0)
8            n /= 2;
9
10        while (n % 3 == 0)
11            n /= 3;
12
13        while (n % 5 == 0)
14            n /= 5;
15
16        return n == 1;
17    }
18};