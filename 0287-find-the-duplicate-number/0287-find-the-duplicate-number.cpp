class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<bool> v(n,0);
        for(int i=0;i<n;++i){
            if(v[nums[i]]) return nums[i];
            v[nums[i]]=1;
        }
        return 69696969;
    }
};