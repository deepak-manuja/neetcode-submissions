class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        set<int>st(nums.begin(),nums.end());
        
        int maxlen = 0;
        int currlength = 0;

        for(auto it : st)
        {
            if(st.find(it-1)==st.end())
            {
               int curr = it;
                currlength = 1;

            while(st.find(curr+1)!=st.end())
            {
                curr++;
                currlength++;
                
            }
            maxlen = max(currlength,maxlen);

            
            }

            
        }

        return maxlen;
        
    }
};
