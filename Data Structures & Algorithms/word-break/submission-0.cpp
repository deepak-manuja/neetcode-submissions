class Solution {
public:
    set<string> st;

    bool solve(vector<int>& dp, int idx, string& s)
    {
        int n = s.length();
        if (idx == n) return true;

        if (dp[idx] != -1) return dp[idx];

        for (int l = 1; l <= n; l++)
        {
            string temp = s.substr(idx, l);
            if (st.find(temp) != st.end() && solve(dp, idx + l, s))
            {
                return dp[idx] = true;
            }
        }

        return dp[idx] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict)
    {
        int n = s.length();
        vector<int> dp(n + 1, -1);

        for (string& word : wordDict)
        {
            st.insert(word);
        }

        return solve(dp, 0, s);
    }
};