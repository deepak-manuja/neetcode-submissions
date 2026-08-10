class Solution {
public:
    int func(vector<int>&dp,vector<int>&nums,int i ,int size)
    {
        if(i>=size) return 0;
        if(dp[i]!=-1) return dp[i];

        int left = nums[i]+func(dp,nums,i+2,size);
        int right = func(dp,nums,i+1,size);

        return dp[i]=max(left,right);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int>dp1(101,-1);
        vector<int>dp2(101,-1);


        int size = nums.size();
        return max(func(dp1,nums,0,size-1),func(dp2,nums,1,size));
    }
};
