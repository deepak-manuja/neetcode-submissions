class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct = INT_MIN;
        int product = 1;
        int n = nums.size();

        for(int i=0;i<nums.size();i++)
        {
            product = product*nums[i];
            maxproduct = max(product,maxproduct);

            if(product==0){
                product =1;
            }
        }
        product = 1;
        for(int i=n-1;i>=0;i--)
        {
            product = product*nums[i];
            maxproduct = max(maxproduct,product);

            if(product==0)
            {
                product=1;
            }
        }

        return maxproduct;
    }
};
