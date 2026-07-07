1class Solution {
2public:
3    long long sumAndMultiply(int n) {
4        int num=n;
5        long long tsum=0;
6        long long ans=0;
7        while(num!=0){
8            int rem=num%10;
9            if(rem!=0){
10                ans=ans*10+rem;
11                tsum+=rem;
12            }
13            num=num/10;
14        }
15    long long ans1=0;
16             while(ans!=0){
17            int rem=ans%10;
18        
19                ans1=ans1*10+rem;
20            
21            
22            ans=ans/10;
23        }
24
25        return ans1*tsum;
26 
27    }
28};