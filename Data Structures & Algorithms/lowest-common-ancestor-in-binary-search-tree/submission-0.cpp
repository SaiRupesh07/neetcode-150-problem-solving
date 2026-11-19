class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr) return 0;
        if(p->val == root->val || q->val == root->val) return root;

        TreeNode* leftlca = lowestCommonAncestor(root->left,p,q);
        TreeNode* rightlca = lowestCommonAncestor(root->right,p,q);
        
        if(leftlca && rightlca){
            return root;
        }else if(leftlca != nullptr){
            return leftlca;
        }else{
            return rightlca;
        }

    }
};
