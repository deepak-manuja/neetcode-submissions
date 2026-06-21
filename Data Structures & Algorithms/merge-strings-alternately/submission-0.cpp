class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;

        string ans ="";
        ans+=word1[i++];
        int count=0;

        while(i<word1.length() && j<word2.length())
        {
            if(count%2==0)
            {
                ans+=word2[j];
                j++;
                count++;
            }
            else 
            {
            ans+=word1[i];
            i++;
            count++;
            }
        }

        while(i<word1.length())
        {
            ans+=word1[i++];
        }
         while(j<word2.length())
        {
            ans+=word2[j++];
        }

        return ans;
    }
};