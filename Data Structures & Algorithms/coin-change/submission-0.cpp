class Solution {
public:
    int solve(vector<vector<int>>&dp,vector<int>&coins,int amount,int i)
    {
        if(amount==0) return 0;
        if(i>=coins.size()) return 1e9;
        if(dp[i][amount]!=-1) return dp[i][amount];

        int take = 1e9;
        int un_take = 1e9;

        un_take = 0+solve(dp,coins,amount,i+1);

        if(coins[i]<=amount)
        {
            take = 1+solve(dp,coins,amount-coins[i],i);
        }

        return dp[i][amount]=min(take,un_take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));

        long long ans = solve(dp,coins,amount,0);

        if(ans==1e9) return -1;
        else
        return ans;
    }
};
