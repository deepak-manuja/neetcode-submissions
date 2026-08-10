class Solution {
public:
    bool solve(string &s,vector<vector<int>>&dp,int i,int j)
    {

    if(i>=j) return true;
    
    if(dp[i][j]!=-1) return dp[i][j];

    if(s[i]==s[j])
    {
        return dp[i][j] = solve(s,dp,i+1,j-1);
    }

    return false;

}

    int sp = 0;
    int maxlen = INT_MIN;

    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        for(int i=0;i<s.length();i++)
        {
        for(int j=1;j<s.length();j++)
        {
            if(solve(s,dp,i,j)==true)
            {
                if(j-i+1>maxlen)
                {
                    maxlen = j-i+1;
                    sp = i;
                }
            }
        }
        }

        return s.substr(sp,maxlen);
    }
};
