class Solution {
public:
    int compress(vector<char>& c) {
        string s="";
        int cnt=1, n=c.size();
        for(int i=0;i<n-1;++i){
            if(c[i]!=c[i+1]){
                s+=c[i];
                if(cnt>1) s+=to_string(cnt);
                cnt=1;
            }
            else cnt++;
        }
        s+=c[n-1];
        if(cnt>1) s+=to_string(cnt);
        n=s.size();
        for(int i=0;i<n;++i) c[i]=s[i];
        return n;
    }
};