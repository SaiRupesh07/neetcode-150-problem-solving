class Solution {
public:
    void backtracking(vector<int>& nums, vector<vector<int>>&ansarr, int indx){
        if(indx == nums.size()){
            ansarr.push_back(nums);
            return;
        }

        for(int i=indx;i<nums.size();i++){
            swap(nums[indx],nums[i]);
            backtracking(nums,ansarr,indx+1);

            swap(nums[indx],nums[i]); // backtracing process
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ansarr;
        backtracking(nums,ansarr,0);
        return ansarr;
    }
};
