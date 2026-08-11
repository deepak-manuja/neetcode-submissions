class Solution {
public:
    int solve(string s,vector<int>&dp,int i,int n)
    {
        
        if(i==n) return 1; //one found tabhi to last tak phoncha h

        if(dp[i]!=-1) return dp[i];

        if(s[i]=='0') return 0;

        int result = solve(s,dp,i+1,n);

        if(i+1<n)
        {
            if(s[i]=='1' || s[i]=='2' && s[i+1]<='6')
            {
                result += solve(s,dp,i+2,n);
            }
        }

        return dp[i]=result;

    }
    int numDecodings(string s) {
        int n = s.length();
        vector<int>dp(n+1,-1);
        return solve(s,dp,0,n);
    }
};
