/////////Try again cpd
class Solution {
public:
    bool find132pattern(vector<int>& a) {
        stack<int> s;
        int x=INT_MIN;
        for (int i=a.size()-1;i>=0;i--){
            if (a[i]<x) return true;
            while (!s.empty() && s.top() < a[i]) {
                x=s.top();
                s.pop();
            }
            s.push(a[i]);
        }
        return false;
    }
};