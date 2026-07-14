1class Solution {
2public:
3    int calPoints(vector<string>& operations) {
4        vector<int> ans;
5
6        for(int i = 0; i < operations.size(); i++) {
7
8            if(operations[i] == "+") {
9                if(ans.size() > 1) {
10                    ans.push_back(ans[ans.size()-1] + ans[ans.size()-2]);
11                } else if(ans.size() == 1) {
12                    ans.push_back(ans[ans.size()-1]);
13                } else {
14                    ans.push_back(0);
15                }
16
17            } else if(operations[i] == "D") {
18                if(ans.size() >= 1) {
19                    int val = ans[ans.size()-1] * 2;
20                    ans.push_back(val);
21                } else {
22                    ans.push_back(0);
23                }
24
25            } else if(operations[i] == "C") {
26                if(!ans.empty())
27                    ans.pop_back();
28
29            } else {
30                ans.push_back(stoi(operations[i]));
31            }
32        }
33
34        int sum = 0;
35        for(int i = 0; i < ans.size(); i++) {
36            sum += ans[i];
37        }
38
39        return sum;
40    }
41};