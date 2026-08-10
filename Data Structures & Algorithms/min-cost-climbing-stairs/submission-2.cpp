class Solution {
public:
    int func(vector<int>&dp,vector<int>&cost,int i)
    {
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];

        int a = cost[i]+func(dp,cost,i+1);
        int b = cost[i]+func(dp,cost,i+2);

        return dp[i] = min(a,b);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(1001,-1);
        return min(func(dp,cost,0),func(dp,cost,1));
    }
};
