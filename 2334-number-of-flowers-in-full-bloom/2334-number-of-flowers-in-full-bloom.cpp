class Solution {
public:
    int check(int x, int sz, vector<int>& a){
        int l=0,r=sz-1,cnt=-1;
        int mid=sz;
        while(l<=r){
            mid=(l+r)/2;
            if(a[mid]<=x){
                cnt=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return cnt+1;
    }
    int help(int x, int sz, vector<int>& a){
        int l=0,r=sz-1,cnt=-1;
        int mid=sz;
        while(l<=r){
            mid=(l+r)/2;
            if(a[mid]<x){
                cnt=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return cnt+1;
    }
    vector<int> fullBloomFlowers(vector<vector<int>>& a, vector<int>& people) {
        int n=a.size(); 
        vector<int> start(n),ends(n);
        for(int i=0;i<n;++i){
            start[i]=a[i][0];
            ends[i]=a[i][1];
        }
        sort(start.begin(),start.end());
        sort(ends.begin(),ends.end());

        int sz=people.size();
        vector<int> ans(sz);
        for(int i=0;i<sz;++i){
            int x=check(people[i],n,start);
            int y=help(people[i],n,ends);
            ans[i]=x-y;
        }
        return ans;
    }
};