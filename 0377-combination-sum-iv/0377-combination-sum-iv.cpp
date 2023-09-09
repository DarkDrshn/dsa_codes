class Solution {
public: 
    int check(vector<int>& nums, int t, vector<int>& dp){
        if(t<1){
            if(t==0) return 1;
            return 0;
        }
        if(dp[t]!=-1) return dp[t];
        int ans=0;
        for(int i:nums) ans+=check(nums,t-i,dp);
        return dp[t]=ans;
    }

    int combinationSum4(vector<int>& nums, int t) { 
        /*
        vector<int> dp(t+1,-1);
        return check(nums,t,dp);
        */
        vector<long long> dp(t+1,0);
        dp[0]=1;
        int mod=INT_MAX;
        for(int i=1;i<=t;++i){
            for(int j=0;j<nums.size();++j){
                if(i-nums[j]>=0){
                    dp[i]+=(dp[i-nums[j]]%mod);
                    dp[i]=dp[i]%mod;
                }
            }
        }
        return dp[t];
    }
};