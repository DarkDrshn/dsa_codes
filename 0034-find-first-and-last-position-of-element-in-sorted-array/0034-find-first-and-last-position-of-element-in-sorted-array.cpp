class Solution {
public:
    vector<int> searchRange(vector<int>& v, int t) {
        int a=-1,b=-1,n=v.size();
        for(int i=0;i<n;++i){
            if(v[i]==t){
                if(a==-1) a=i,b=i;
                else b=i;
            }
            if(v[i]>t) return {a,b};
        }
        return {a,b};
    }
};