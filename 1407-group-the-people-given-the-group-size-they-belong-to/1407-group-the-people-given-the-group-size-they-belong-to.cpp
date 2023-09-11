class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& v) {
        int n=v.size(),j;
        vector<vector<int>> ans;
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++){
            a[i]=make_pair(v[i],i);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            vector<int> t;
            for(j=i;(j<(i+a[i].first));j++){
                t.push_back(a[j].second);
            }
            i=j-1;
            ans.push_back(t);
        }
        return ans;
    }
};