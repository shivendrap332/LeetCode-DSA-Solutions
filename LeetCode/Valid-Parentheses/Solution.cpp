1#include <stack>
2#include <string>
3using namespace std;
4
5class Solution {
6public:
7    bool isValid(string s) {
8        stack<char> st;
9        for (char ch : s) {
10            if (ch == '(' || ch == '[' || ch == '{') {
11                st.push(ch);
12            } else {
13                if (st.empty()) {
14                    return false;
15                }
16                char top = st.top();
17                st.pop();
18                if (ch == ')' && top != '(') return false;
19                if (ch == ']' && top != '[') return false;
20                if (ch == '}' && top != '{') return false;
21            }
22        }
23        return st.empty();
24    }
25};