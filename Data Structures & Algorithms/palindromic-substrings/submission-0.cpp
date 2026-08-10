class Solution {
public:
    bool fun(vector<vector<int>>&dp,string &s,int i,int j)
    {
        if(i>=j) return true;
        if(dp[i][j]!=-1) return dp[i][j];


        if(s[i]==s[j])
        {
            return dp[i][j]= fun(dp,s,i+1,j-1);
        }

        return false;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int count = 0;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(fun(dp,s,i,j)==true)
                {
                    count++;
                }
            }
        }
        return count;
    }
};



