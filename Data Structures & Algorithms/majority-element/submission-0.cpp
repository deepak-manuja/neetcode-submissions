class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int n = nums.size();
        for(int num : nums)
        {
            mp[num]++;
        }

        for(auto it : mp)
        {
            if(it.second > floor(n/2))
            {
                return it.first;
            }
        }
        return -1;
    }


};