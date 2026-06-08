class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();

        string res = "";
        int i =0;
        int j =0;
        while(i<strs[0].length() && j<strs[n-1].length())
        {
            if(strs[0][i]==strs[n-1][j])
            {
                res+=strs[0][i];
                i++;
                j++;
            }
            else
            break;
        }

        return res;
    }
};