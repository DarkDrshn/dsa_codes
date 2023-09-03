class Solution {
public:
    int longestValidParentheses(string s) {
        int lastInvalid = -1;
        int stack = 0;
        int ans = 0;

        for(int i = 0; i < s.size(); i += 1) {
            if (s[i] == '(') {
                stack += 1;
            } else {
                if (stack == 0) {
                    lastInvalid = i;
                } else {
                    stack -= 1;
                    if (stack == 0) {
                        ans = max(ans, i - lastInvalid);
                    }
                }
            }
        }
    
        stack = 0;
        lastInvalid = s.size();
        for(int i = s.size() - 1; i >= 0; i -= 1) {
            if (s[i] == ')') {
                stack += 1;
            } else {
                if (stack == 0) {
                    lastInvalid = i;
                } else {
                    stack -= 1;
                    if (stack == 0) {
                        ans = max(ans, lastInvalid - i);
                    }
                }
            }
        }

        return ans;
    }
};