class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        for(auto i:b) a.push_back(i);
        int n=a.size();
        double ans;
        sort(a.begin(),a.end());
        if(n&1){
            ans=a[(n-1)/2];
        }
        else{
            ans=a[(n-2)/2]+a[n/2];
            ans/=2;
        }
        return ans;

    }
};