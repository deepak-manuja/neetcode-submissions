class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        ans[0]=1;
        for(int i=1;i<n;i++)
        {
            ans[i]=nums[i-1]*ans[i-1];
        }

        int rightprod = 1;
        for(int i=n-1;i>=0;i--)
        {
            ans[i]=ans[i]*rightprod;
            rightprod *= nums[i];
        }

        return ans;
    }
};







//1 1 2 8

//        8
//48 24 6 1