class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        int n=arr.size(),sum=0;
        vector<int> v(n+1);
        for(int i=0;i<n;++i){
            sum=sum^arr[i];
            v[i+1]=sum;
        }
        n=q.size();
        vector<int> ans(n);
        for(int i=0;i<n;++i){
            ans[i]=v[q[i][0]]^v[q[i][1]+1];
        }
        return ans;
    }
};