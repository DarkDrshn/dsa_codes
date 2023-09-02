class Solution {
public:
    long long maxSum(vector<int>& a, int x, int k) {
        long long n=a.size(),sum=0,ans=0;
        map<int,int> m;
        for(int i=0;i<k;++i){
            sum+=a[i];
            ++m[a[i]];
        }
        if(m.size()>=x) ans=max(ans,sum);
        
        for(int i=k;i<n;++i){
            if(m[a[i-k]]==1) m.erase(a[i-k]);
            else --m[a[i-k]];
            
            ++m[a[i]];
            
            sum+=a[i];
            sum-=a[i-k];
            
            if(m.size()>=x) ans=max(ans,sum);
        }
        return ans;
        
    }
};