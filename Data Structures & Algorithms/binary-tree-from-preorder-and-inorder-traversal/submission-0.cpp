class Solution {
public:
    int search(vector<int>& inorder, int left, int right, int val) {
        for(int i = left; i <= right; i++) {
            if(inorder[i] == val) {
                return i;
            }
        }
        return -1;
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,
                     int& preidx, int left, int right) {

        if(left > right) return nullptr;

        TreeNode* root = new TreeNode(preorder[preidx]);

        int indx = search(inorder, left, right, preorder[preidx]);
        preidx++;

        root->left = helper(preorder, inorder, preidx, left, indx - 1);
        root->right = helper(preorder, inorder, preidx, indx + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preidx = 0;
        return helper(preorder, inorder, preidx, 0, inorder.size() - 1);
    }
};