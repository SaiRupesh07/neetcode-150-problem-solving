
class Solution {
public:
   int heightoftree(TreeNode* root){
     if(root == nullptr) return true;

     int left = heightoftree(root->left);
     if(left == -1) return -1;

     int right = heightoftree(root->right);
     if(right == -1) return -1;

     if(abs(right-left) > 1) return -1;
     
     return max(left,right)+1;
   }
    bool isBalanced(TreeNode* root) {
        if(heightoftree(root) != -1) return true;
        return false;
    }
};
