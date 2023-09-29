class Solution {
public:
    vector<int> minSubsequence(vector<int>& a) {
        int sum=0;
        sort(a.begin(),a.end(),greater<int>());
        for(int i:a) sum+=i;
        int anti=0,n=a.size();
        for(int i=0;i<n;++i){
            sum-=a[i];
            anti+=a[i];
            if(anti>sum){
                vector<int> ans(a.begin(),a.begin()+i+1);
                return ans;
            }
        }
        return a;
    }
};