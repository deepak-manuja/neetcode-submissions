class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int num = 1;num<nums.size();num++)
        {
           if(nums[num] == nums[num-1]) 
           {
               return true;
           }
        }

        return false;
    }
};