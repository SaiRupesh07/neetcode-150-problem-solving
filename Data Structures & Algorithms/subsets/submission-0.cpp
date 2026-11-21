class Solution {
public:
    void backtracking(vector<int>&nums, vector<int>&cursub,        
     vector<vector<int>>&ansarr, int indx){
        if(indx == nums.size()){
            ansarr.push_back(cursub);
            return;
        }

        cursub.push_back(nums[indx]);
        backtracking(nums,cursub, ansarr,indx+1);

        cursub.pop_back();
        backtracking(nums,cursub, ansarr,indx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ansarr;
        vector<int>cursub;
        backtracking(nums,cursub,ansarr,0);
        return ansarr;
    }
};
