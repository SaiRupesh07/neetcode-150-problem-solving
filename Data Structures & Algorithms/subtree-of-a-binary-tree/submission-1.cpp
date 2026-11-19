class Solution {
public:
    bool issame(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr && subRoot == nullptr) return true;

        if(root == nullptr || subRoot == nullptr) return false;

        if(root->val == subRoot->val) {
            return issame(root->left, subRoot->left) &&
                   issame(root->right, subRoot->right);
        }
        return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == nullptr) return true;

        if(root == nullptr) return false;

        if(root->val == subRoot->val) {
            if(issame(root, subRoot)) return true;
        }

        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};