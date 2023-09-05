/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* check(int it, int a, int b, vector<int>& pre, vector<int>& in){
        if(it+1>pre.size() || a>b) return NULL;
        int x=0;
        TreeNode* root = new TreeNode(pre[it]);
        for(int i=a;i<=b;++i){
            if(in[i]==pre[it]) x=i;
        }
        root->right=check(it+x+1-a,x+1,b,pre,in);
        root->left =check(it+1,a,x-1,pre,in);
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n=in.size();
        return check(0,0,n-1,pre,in);
    }
};