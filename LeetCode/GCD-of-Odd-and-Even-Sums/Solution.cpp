1class Solution {
2public:
3    int gcdOfOddEvenSums(int n) {
4        int sumodd = 0;
5        int sumeven = 0;
6
7        for(int i = 1; i <= n; i++) {
8            sumodd += 2*i - 1;
9            sumeven += 2*i;
10        }
11
12        for(int i = min(sumodd, sumeven); i > 0; i--) {
13            if(sumodd % i == 0 && sumeven % i == 0) {
14                return i;
15            }
16        }
17
18        return 1;
19    }
20};