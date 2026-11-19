class Solution {
public:
    int dfs(TreeNode* root, int maxvalue){
        if(root == nullptr) return 0;
        int count = 0;

        if(root->val >= maxvalue){
            count = 1;
        }

        maxvalue = max(maxvalue,root->val);

        int left = dfs(root->left,maxvalue);
        int right = dfs(root->right,maxvalue);

        return count+left+right;
    }
    int goodNodes(TreeNode* root) {
        return dfs(root,INT_MIN);
    }
};
