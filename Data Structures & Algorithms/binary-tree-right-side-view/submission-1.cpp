class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
       vector<int>ans;
       queue<TreeNode*>q;
      
       if(root == nullptr) return ans;
       q.push(root);
       q.push(nullptr); 
       TreeNode* currentnode = nullptr;
       TreeNode* lastnode = nullptr;

       while(!q.empty()){
         currentnode = q.front();
         q.pop();
         
         if(currentnode == nullptr){
            ans.push_back(lastnode->val);
            if(q.empty()){
                break;
            }
            q.push(nullptr);
         }else{
            lastnode = currentnode;
            if(currentnode->left != nullptr){
                q.push(currentnode->left);
            }
            if(currentnode->right != nullptr){
                q.push(currentnode->right);
            }
         }
       } 
       return ans;
    }
};
