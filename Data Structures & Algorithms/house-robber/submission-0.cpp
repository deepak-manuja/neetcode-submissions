class Solution {
public:
    int func(vector<int>&dp,vector<int>&nums,int i)
    {
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];

        int left = nums[i]+func(dp,nums,i+2);
        int right = func(dp,nums,i+1);

        return dp[i]=max(left,right);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(101,-1);
        return func(dp,nums,0);
    }
};
