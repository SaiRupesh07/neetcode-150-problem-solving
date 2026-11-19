class Solution {
public:
    class TreeInfo {
    public:
        int height;
        int dia;

        TreeInfo(int height, int dia) {
            this->height = height;
            this->dia = dia;
        }
    };

    TreeInfo diameterOfBinaryTreeHelper(TreeNode* root) {
        if (root == nullptr) {
            return TreeInfo(0, 0);
        }

        TreeInfo left = diameterOfBinaryTreeHelper(root->left);
        TreeInfo right = diameterOfBinaryTreeHelper(root->right);

        int finalHeight = max(left.height, right.height) + 1;

        int dia1 = left.dia;
        int dia2 = right.dia;
        int dia3 = left.height + right.height;

        int finalDia = max(max(dia1, dia2), dia3);

        return TreeInfo(finalHeight, finalDia);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        return diameterOfBinaryTreeHelper(root).dia;
    }
};