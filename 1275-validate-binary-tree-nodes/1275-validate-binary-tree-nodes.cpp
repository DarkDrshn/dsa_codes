class Solution {
public:
    bool dfs(int x, int i, vector<bool>& vis, vector<vector<int>>&g){
        if(vis[i]) return 0;
        bool ans=1;
        vis[i]=1;
        for(auto it:g[i]) if(it!=x) ans&=dfs(i,it,vis,g);
        return ans;
    }
    bool validateBinaryTreeNodes(int n, vector<int>& l, vector<int>& r) {
        vector<vector<int>> g(n);
        vector<bool> vis(n,0);
        vector<int> child(n,0);
        for(int i=0;i<n;++i){
            if(l[i]!=-1){ 
                g[i].push_back(l[i]);
                g[l[i]].push_back(i);
                ++child[l[i]];
            }
            if(r[i]!=-1){ 
                g[i].push_back(r[i]);
                g[r[i]].push_back(i);
                ++child[r[i]];
            }
        }

        for(auto i:child) if(i>1) return 0;
        if(dfs(-1,0,vis,g)){
            for(auto i:vis) if(!i) return 0;
            return 1;
        }
        return 0;
    }
};