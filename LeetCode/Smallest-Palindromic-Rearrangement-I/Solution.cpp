1class Solution {
2public:
3    string smallestPalindrome(string s) {
4        
5        
6int n=s.length();
7       
8
9        sort(s.begin(),s.begin()+n/2);
10        
11         for(int i=0; i<n/2; i++){
12            s[n-1-i]=s[i];
13         }
14
15return s;
16
17    }
18};