1class Solution {
2public:
3    long long countCommas(long long n) {
4        
5
6        int c=n;
7        int cnt=0;
8        int num=0;
9        while(n!=0){
10            int rem=n%10;
11            num=num*10+rem;
12            cnt++;
13            if(cnt>=4){
14             return c-1000+1;
15            }
16            
17            n=n/10;
18            
19        }
20        return 0;
21    }
22};