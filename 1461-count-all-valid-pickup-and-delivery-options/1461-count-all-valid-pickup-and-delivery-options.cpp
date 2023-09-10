class Solution {
public:
    int mod=1e9+7;
    int countOrders(int n) {
        //if(dp[n]!=-1) return dp[n];
        long long pre=1;
        for(int i=2;i<=n;++i){
            pre=(pre*((i+i)-1)*i)%mod;
        }
        return pre;
        

    }
};