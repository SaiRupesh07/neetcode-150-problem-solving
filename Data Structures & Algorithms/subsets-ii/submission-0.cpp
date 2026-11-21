class Solution {
public:
    void backtracking(vector<int>& nums, vector<int>cursub, vector<vector<int>>&ansarr, int indx){
    if(indx == nums.size()){
        ansarr.push_back(cursub);
        return;
    }

    cursub.push_back(nums[indx]);
    backtracking(nums,cursub,ansarr,indx+1);

    int i=indx+1;
    while(i<nums.size() && nums[i]==nums[indx]) i++;

    cursub.pop_back();
    backtracking(nums,cursub,ansarr,i);
 }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ansarr;
        vector<int>cursub;
        backtracking(nums,cursub,ansarr,0);
        return ansarr;
    }
};
