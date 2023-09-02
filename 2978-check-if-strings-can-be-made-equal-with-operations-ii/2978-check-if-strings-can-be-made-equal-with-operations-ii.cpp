class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n=s1.size();
        vector<pair<int,int>> a(26,{0,0}),b(26,{0,0});
        for(int i=0;i<n;++i){
            if(i&1) ++a[s1[i]-'a'].second;
            else ++a[s1[i]-'a'].first;
            if(i&1) ++b[s2[i]-'a'].second;
            else ++b[s2[i]-'a'].first;
        }
        for(int i=0;i<26;++i){
            if(a[i].first!=b[i].first) return 0;
            if(a[i].second!=b[i].second) return 0;
        }
        return 1;
    }
};