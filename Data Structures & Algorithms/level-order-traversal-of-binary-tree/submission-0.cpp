class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>level;
        
        if(root == nullptr) return ans;
        queue<TreeNode*>q;
        q.push(root);
        q.push(nullptr);

        while(!q.empty()){
            TreeNode* curnode = q.front();
            q.pop();

            if(curnode == nullptr){
              ans.push_back(level);
              level.clear();
              if(q.empty()){
                 break;
              }else{
                q.push(nullptr);
              }
            }else{
                level.push_back(curnode->val);
                if(curnode->left != nullptr){
                    q.push(curnode->left);
                }
                if(curnode->right != nullptr){
                    q.push(curnode->right);
                }
            }
        }
        return ans;
    }
};
