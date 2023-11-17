class Solution {
public:
    int findPeakElement(vector<int>& a){
        bool l,h;
        int n=a.size(),mx=INT_MIN,ans=-1;
        for(int i=0;i<n;++i){
            l=1,h=1;
            if(i>0 && a[i]<a[i-1]) l=0;
            if(i<n-1 && a[i]<a[i+1]) h=0;
            if(l&h){ 
                mx=max(mx,a[i]);
                ans=i;
            }
        }   
        return ans;
    }
};